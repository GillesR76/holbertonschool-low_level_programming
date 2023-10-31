#include "main.h"

/**
 * times_table - function that prints the times table of number nine
 * @void: void
 *
 * Return: void
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		_putchar('0');
		for (y = 1; y <= 9; y++)
		{
			int product = x *  y;

			if (product < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
