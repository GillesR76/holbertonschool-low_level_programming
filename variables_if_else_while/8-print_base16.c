#include <stdio.h>

/**
 * main - Entry point
 *
 * Program that prints all the numbers of base sixteen in lowercase
 *
 * Return: Always (0)
**/

int main(void)
{
	int n = 0;
	char ch = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}

	putchar('\n');

	return (0);
}
