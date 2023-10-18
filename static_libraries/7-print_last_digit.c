#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @j: integer
 *
 * Return: value of the last digit
*/

int print_last_digit(int j)
{
	int n = (j % 10);

	if (n < 0)
	{
		n = (-1) * n;
	}

	_putchar('0' + n);

	return (n);
}
