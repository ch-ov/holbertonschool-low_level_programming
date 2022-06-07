#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: Hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *current = NULL;
	int flag = 1;

	if (ht == NULL)
		return;
	putchar('{');
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			current = ht->array[index];
			while (current != NULL)
			{
				if (flag == 0)
					printf(", ");
				printf("'%s': '%s'", current->key, current->value);
				flag = 0;
				current = current->next;
			}
		}
	}
	printf("}\n");
}
