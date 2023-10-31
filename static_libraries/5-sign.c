#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @n: number to be checked within the function
 *
 * Return: value
*/

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar(10);
}
