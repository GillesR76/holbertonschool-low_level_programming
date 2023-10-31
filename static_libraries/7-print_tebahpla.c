#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that prints the lowercase alphabet in reverse
 *
 * Return: Always (0)
**/

int main(void)
{
	char reverse = 'z';

	while (reverse >= 'a')
	{
		putchar(reverse);
		reverse--;
	}

	putchar('\n');

	return (0);
}
