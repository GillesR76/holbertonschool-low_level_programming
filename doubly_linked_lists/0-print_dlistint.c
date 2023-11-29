#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a double list
 * @h: head node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}
	return (count);
}
