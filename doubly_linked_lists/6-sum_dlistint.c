#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a list
 * @head: head node
 *
 * Return: a sum or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *sumnode = head;
	int count = 0;

	while (sumnode != NULL)
	{
		count += sumnode->n;
		sumnode = sumnode->next;
	}
	return (count);
}
