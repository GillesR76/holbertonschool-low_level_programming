#include "main.h"

/**
 * times_table - function that prints the times table of number nine
 * @void: void
 *
 * Return: void
 */

void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			_putchar(((x * y) / 10) + '0');
			_putchar(((x * y) % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
