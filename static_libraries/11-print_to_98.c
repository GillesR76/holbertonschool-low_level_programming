#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers
 * @n: natural number
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n++);
	}
	while (n > 98)
	{
		printf("%d, ", n--);
	}
	printf("%d\n", n);
}
