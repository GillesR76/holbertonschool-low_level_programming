#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array
 * @c: char
 *
 * Return: null if size 0
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(size * sizeof(char));

	if (ar == NULL)
		exit(0);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	ar[i] = '\0';

	return (ar);
}
