#include "main.h"

/**
 * find_square - function that comes as a support function
 * @n: integer
 * @testnb: integer
 *
 * Return: integer
 */

int find_square(int n, int testnb)
{
	if (testnb * testnb > n)
	{
		return (-1);
	}
	else if (testnb * testnb == n)
	{
		return (testnb);
	}
	else
	{
		return (find_square(n, testnb + 1));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (find_square(n, 0));
	}
}
