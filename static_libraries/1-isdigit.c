#include "main.h"

/**
 * _isdigit - function that checks for a digit
 * @c: digit
 *
 * Return: return 1 if digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (isdigit(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
