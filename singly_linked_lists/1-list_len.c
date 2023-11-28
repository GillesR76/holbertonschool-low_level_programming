#include "lists.h"

/**
 * list_len - function that returns the number of elements
 * @h: head node
 *
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *temp;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
