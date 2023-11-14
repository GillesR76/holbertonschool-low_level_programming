#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: integer
 * @cmp: function pointer
 *
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	return (-1);
}
