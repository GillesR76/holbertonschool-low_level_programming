#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character
 *
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{

	if (isupper(c) > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
