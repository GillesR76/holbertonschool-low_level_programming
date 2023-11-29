#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a list
 * @head: head node
 * @index: unsigned integer
 *
 * Return: the nth node of a list or null if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nthnode;
	unsigned int i;

	nthnode = head;

	if (nthnode == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		nthnode = nthnode->next;
	}

	return (nthnode);
}
