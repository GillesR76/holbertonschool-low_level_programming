#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	int temp;

	while (s[x] != '\0')
	{
		x++;
	for (y = x - 1; y >= 0; y--)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		_putchar(s[y]);
	}
		_putchar('\n');
	}
}
