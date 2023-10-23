#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: pointer to a
 * @b: pointer to b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;
	x = *b;

	*b = *a;
	*a = x;
}
