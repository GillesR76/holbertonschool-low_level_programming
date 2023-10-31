#include "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 * @void: void
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	char al2;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (al2 = 'a'; al2 <= 'z'; al2++)
		{
			_putchar(al2);
		}

	_putchar('\n');
	}
}
