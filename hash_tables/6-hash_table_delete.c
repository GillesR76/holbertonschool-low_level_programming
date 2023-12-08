#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		temp = ht->array[index];

		while (temp != NULL)
		{
			node = temp;
			temp = temp->next;
			free(node->key);
			free(node->value);
			free(node);
		}
	}
	free(ht->array);
	free(ht);
}
