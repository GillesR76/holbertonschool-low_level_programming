#include "main.h"

/**
 * find_prime - recursive function to find the prime number
 * @n: integer
 * @i: integer
 *
 * Return: integer
 */

int find_prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
		return (find_prime(n, i + 1));
}

/**
 * is_prime_number - function that identifies prime numbers
 * @n: integer
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (find_prime(n, 2));
	}
}
