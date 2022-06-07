#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: Hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *current, *aux;

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
