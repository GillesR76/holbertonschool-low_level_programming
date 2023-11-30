#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * @h: head node
 * @idx: unsigned int used as index
 * @n: int that stores the data inside the nodes
 *
 * Return: the address of the new node or null if fail
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *newnode, *temp;

	if (h == NULL)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
			(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}
	temp = *h;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	newnode->prev = temp;
	if (temp->next != NULL)
		temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}
