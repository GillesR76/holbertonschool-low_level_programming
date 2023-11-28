#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list
 * @head: head node
 * @str: string
 *
 * Return: the address of the new element or NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode = malloc(sizeof(list_t));

	if (newnode != NULL)
	{
		newnode->str = strdup(str);
		newnode->len = strlen(str);
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}
