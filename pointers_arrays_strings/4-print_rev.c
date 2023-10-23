#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 * @s: string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = x - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
