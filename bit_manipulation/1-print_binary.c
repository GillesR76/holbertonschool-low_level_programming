#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: unsigned long int
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int check = 1;
	unsigned long int temp = n;
	int count = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (temp > 0)
	{
		count++;
		temp >>= 1;
	}

	check <<= (count - 1);

	while (check > 0)
	{
		if (n & check)
			_putchar('1');
		else
			_putchar('0');

		check >>= 1;
	}
}

