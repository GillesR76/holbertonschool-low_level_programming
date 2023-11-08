#include "main.h"

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned integer
 * @size: unsigned integer
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc(nmemb * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
