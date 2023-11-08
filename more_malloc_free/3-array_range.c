#include "main.h"

/**
 * array_range - function that creates an array of integers
 * @min: integer
 * @max: integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int i;
	int *ar = NULL;

	if (min > max)
		return (NULL);

	ar = malloc(((max - min) + 1) * sizeof(int));

	if (ar == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ar[i] = min;
	}
	return (ar);
}
