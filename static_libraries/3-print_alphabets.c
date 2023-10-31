#include <stdio.h>
/**
 * main - Entry point
 *
 * Print the alphabet in lowercase and then in uppercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet1 = 'a';
	char alphabet2 = 'A';

	while (alphabet1 <= 'z')
{
	putchar(alphabet1);
	alphabet1++;
}

	while (alphabet2 <= 'Z')
{
	putchar(alphabet2);
	alphabet2++;
}
	putchar('\n');

	return (0);
}
