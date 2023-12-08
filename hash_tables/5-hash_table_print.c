#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node = NULL;
	int ifprinted = 0;

	if (ht == NULL)
	{
		printf("\n");
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];

		while (node != NULL)
		{
			if (ifprinted)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			ifprinted = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
