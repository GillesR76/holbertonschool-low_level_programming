#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * @h: head node
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int len = 0;
	const dlistint_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
