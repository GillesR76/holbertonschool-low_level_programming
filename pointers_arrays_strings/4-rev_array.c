#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: integer
 * @n: integer
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int temp = 0;
	int start;
	int end;

	for (start = 0, end = n - 1; start <= end; start++, end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
	}
}
