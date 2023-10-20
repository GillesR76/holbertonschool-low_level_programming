#include "main.h"

/**
 * print_numbers - function taht prints the numbers from 0 to 9
 * @void: void
 *
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
