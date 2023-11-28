#include "lists.h"

/**
 * free_list - function that frees a list
 * @head: head node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *freenode;
	list_t *temp;

	temp = head;

	while (temp != NULL)
	{
		freenode = temp;
		temp = temp->next;
		free(freenode->str);
		free(freenode);
	}
}
