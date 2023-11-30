#include "main.h"

/**
 * binary_to_uint - function that converts a binary number
 * @b: string
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int nbr = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		nbr = (nbr << 1) + (b[i] - '0');
	}
	return (nbr);
}
