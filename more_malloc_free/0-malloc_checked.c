#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = NULL;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
