#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: head node
 * @n: integer
 *
 * Return: the address of the new element or null if fail
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *endnode = malloc(sizeof(dlistint_t));

	if (endnode == NULL)
		return (NULL);

	endnode->n = n;

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
		endnode->prev = temp;
		endnode->next = NULL;
	}
	return (endnode);
}
