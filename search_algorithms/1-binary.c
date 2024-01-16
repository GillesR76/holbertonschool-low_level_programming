#include "search_algos.h"

/**
 * linear_search - function that searches using the binary search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index of the value searched for
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start = 0;
	size_t end = size - 1;
	int mid;
	size_t i;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		mid = start + ((end - start) / 2);

		printf("Searching in array : ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i <= end - 1)
				printf(", ");
		}
		printf("\n");

		if (value == array[mid])
			return (mid);
		else if (value < array[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
