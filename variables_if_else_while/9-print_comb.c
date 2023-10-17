#include <stdio.h>

/**
 * main - Entry point
 *
 * program that prints all possible combinations of single-digit numbers
 *
 * Return: Always (0)
**/

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
