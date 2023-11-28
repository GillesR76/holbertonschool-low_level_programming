#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list
 * @head: head node
 * @str: string
 *
 * Return: the address of the new element or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;

	list_t *endnode = malloc(sizeof(list_t));

	if (endnode == NULL)
		return (NULL);

	endnode->str = strdup(str);
	endnode->len = strlen(str);

	temp = *head;

	if (temp == NULL)
		*head = endnode;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = endnode;
	}

	return (endnode);
}
