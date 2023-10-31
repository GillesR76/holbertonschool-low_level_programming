#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer to print
 *
 * Return: void
 */

void print_number(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (x < 10)
		{
			_putchar(x + '0');
		}
		else if (x < 100)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
		}
		else if (x < 1000)
		{
			_putchar((x / 100) + '0');
			_putchar(((x / 10) % 10) + '0');
			_putchar((x % 10) + '0');
		}
		else if (x < 10000)
		{
			_putchar((x / 1000) + '0');
			_putchar(((x / 100) % 10) + '0');
			_putchar(((x / 10) % 10) + '0');
			_putchar((x % 10) + '0');
		}
		else if (x < 100000)
		{
			_putchar((x / 10000) + '0');
			_putchar(((x / 1000) % 10) + '0');
			_putchar(((x / 10) % 10 + '0');
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
	}
}
