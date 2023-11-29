#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * @head: head node
 * @n: integer
 *
 * Return: the address of the new element or null if fail
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode != NULL)
	{
		newnode->n = n;
		newnode->next = *head;
		newnode->prev = NULL;
		if (*head != NULL)
			(*head)->prev = newnode;
		*head = newnode;
		return (newnode);
	}
	return (NULL);
}
