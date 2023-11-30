#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at an index
 * @head: head node
 * @index: unsigned int used as index
 *
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	for (i = 0; i < index && temp; i++)
		temp = temp->next;

	if (temp == NULL)
		return (-1);
	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	
	free(temp);
	return (1);
}

