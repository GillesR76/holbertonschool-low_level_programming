#include "main.h"

/**
 * jack_bauer - function that prints every minute of a day
 * @void: void
 *
 * Return: void
*/

void jack_bauer(void)
{
	int t1;
	int t2;

	for (t1 = 0; t1 <= 23; t1++)
	{
		for (t2 = 0; t2 <= 59; t2++)
		{
			_putchar((t1 / 10) + '0');
			_putchar((t1 % 10) + '0');
			_putchar(':');
			_putchar((t2 / 10) + '0');
			_putchar((t2 % 10) + '0');
			_putchar('\n')
		}
	}
}
