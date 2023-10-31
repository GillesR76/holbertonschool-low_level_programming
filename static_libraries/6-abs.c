#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j: integer which will be tested
 *
 * Return: absolute value
*/

int _abs(int j)
{
	if (j < 0)
	{
		j = (-1) * j;
	}

	return (j);
}
