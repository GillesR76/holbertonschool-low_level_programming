#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: unsigned long int
 *
 * Return: pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = malloc(sizeof(hash_table_t) * size);

	if (new_hash_table == NULL)
		return (NULL);

	return (new_hash_table);
}
