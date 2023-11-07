#include "main.h"

/**
 * alloc_grid - function that returns a pointer to a 2D array
 * @width: array
 * @height: array
 *
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **ar = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc((height) * sizeof(int *));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));

		if (ar[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ar[i]);
			}
			free(ar);
			return (NULL);
		}
		
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);

	free(ar);
}
