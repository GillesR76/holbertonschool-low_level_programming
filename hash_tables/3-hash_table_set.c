#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 if success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *temp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
		newnode->key = strdup(key);
		newnode->value = strdup(value);

		if (newnode->value == NULL)
		{
			free(newnode);
			return (0);
		}
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	else
	{
		temp = ht->array[index];

		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				free(temp);
				return (1);
			}
			temp = temp->next;
		}
	}
	return (1);
}
