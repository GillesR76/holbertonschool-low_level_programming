#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: test for alphabetic letter
 *
 * Return: alpha
*/

int _isalpha(int c)
{
	int alpha;

	if (isalpha(c) > 0)
	{
		alpha = 1;
	} else
	{
		alpha = 0;
	}

	return (alpha);
}
