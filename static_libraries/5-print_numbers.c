#include <stdio.h>

/**
 * main - Entry point
 *
 * Creating a program that prints all single digits number of Base ten
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
	}

	putchar('\n');

	return (0);
}
