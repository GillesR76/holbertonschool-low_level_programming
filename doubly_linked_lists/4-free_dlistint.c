#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: head node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freenode;
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		freenode = temp;
		temp = temp->next;
		free(freenode);
	}
}
