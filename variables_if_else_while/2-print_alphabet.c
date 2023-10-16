#include <stdio.h>
/**
 * main - Entry point
 *
 * Using the main function as entry point for execution
 * Creating a string with char and the puts function to print
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z')

{
	putchar(alphabet);
	alphabet++;
}
	putchar('\n');

	return (0);
}
