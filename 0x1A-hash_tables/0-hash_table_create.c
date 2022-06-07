#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: Size of table
 * Return: hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;

	if (size == 0)
		return (NULL);
	hashTable = calloc(1, sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = calloc(size, sizeof(hash_node_t **));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	return (hashTable);
}
