#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
	{
		len++;
	}
	for (x = len / 2; x <= len - 1; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
