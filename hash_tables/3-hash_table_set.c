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

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];

		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				free(temp->value);
				return (1);
			}
			temp = temp->next;
		}
	}
	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (0);
	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = NULL;

	if (newnode->value == NULL)
	{
		free(newnode);
		return (0);
	}
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
