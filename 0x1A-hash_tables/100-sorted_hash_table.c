#include "hash_tables.h"
/**
 * shash_table_create - Creates a hash table.
 * @size: Size of table
 * Return: shash_table_t
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashTable;

	if (size == 0)
		return (NULL);
	hashTable = calloc(1, sizeof(shash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(shash_node_t **));
	if (hashTable->array == NULL)
		return (NULL);
	hashTable->shead = NULL;
	hashTable->stail = NULL;
	return (hashTable);
}
/**
 * shash_table_set - Adds an element to the hash table.
 * @ht: Hash table
 * @key: The key
 * @value: The value of element
 * Return: int
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *current, *element;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	index = key_index((const unsigned char *)key, ht->size);
	element = malloc(sizeof(shash_node_t));
	if (element == NULL)
		return (0);
	element->key = strdup(key);
	if (element->key == NULL)
		return (0);
	element->value = strdup(value);
	if (element->value == NULL)
		return (0);
	element->next = ht->array[index], element->sprev = NULL;
	element->snext = NULL, ht->array[index] = element;
	if (ht->shead == NULL)
	{
		ht->shead = element;
		ht->stail = element;
		return (1);
	}
	insert_node(ht, element);
	return (1);
}
/**
 * insert_node - Insert a node in a hash table
 * @ht: Hash table
 * @element: Node
 */
void insert_node(shash_table_t *ht, shash_node_t *element)
{
	shash_node_t *current, *prev;

	if (strcmp(ht->shead->key, element->key) > 0)
	{
		element->snext = ht->shead;
		ht->shead->sprev = element;
		ht->shead = element;
	}
	else
	{
		current = ht->shead;
		while (current != NULL)
		{
			prev = current->sprev;
			if (strcmp(current->key, element->key) > 0)
			{
				prev->snext = element;
				current->sprev = element;
				element->snext = current;
				element->sprev = prev;
				return;
			}
			prev = current;
			current = current->snext;
		}
		prev->snext = element;
		element->sprev = prev;
		ht->stail = element;
	}
}
/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: Hash table
 * @key: The key
 * Return: char
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current = NULL;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - Prints a hash table.
 * @ht: Hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current = NULL;
	int flag = 1;

	if (ht == NULL)
		return;
	current = ht->shead;
	putchar('{');
	while (current != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - Prints a hash table in reverse.
 * @ht: Hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;
	int flag = 1;

	if (ht == NULL)
		return;
	current = ht->stail;
	putchar('{');
	while (current != NULL)
	{
		if (flag == 0)
			printf(", ");
		printf("'%s': '%s'", current->key, current->value);
		flag = 0;
		current = current->sprev;
	}
	printf("}\n");
}
/**
 * shash_table_delete - Deletes a hash table.
 * @ht: Hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned int index = 0;
	shash_node_t *current, *aux;

	if (ht == NULL)
		return;
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
			current = ht->array[index];
			while (current != NULL)
			{
				aux = current;
				free(current->key);
				if (current->value != NULL)
					free(current->value);
				current = current->next;
				free(aux);
			}
		}
	}
	free(ht->array);
	free(ht);
}
