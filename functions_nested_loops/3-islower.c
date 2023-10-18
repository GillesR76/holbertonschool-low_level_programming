#include "main.h"

/**
 * _islower - check for lowercase character
 * @c: test for lowercase letter
 *
 * Return: temp
*/

int _islower(int c)
{

	int temp;

	if (islower(c) > 0)
	{
		temp = 1;
	} else
	{
		temp = 0;
	}

	return (temp);
}
