#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs;
	unsigned long int i;

	hs = malloc(sizeof(hash_table_t));
	if (hs == NULL)
		return (NULL);

	hs->size = size;
	hs->array = malloc(sizeof(hash_node_t *) * size);
	if (hs->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hs->array[i] = NULL;

	return (hs);
}
