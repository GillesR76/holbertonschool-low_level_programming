#include "main.h"

/**
 * print_line - function that draws a straight line
 * @n: number of times the charachter _
 *
 * Return: Always (0)
 */

void print_line(int n)
{
	int t;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (t = 1; t <= n ; t++)
	{
		if (n > 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
