#include "main.h"

/**
 * set_bit - funtion that sets the value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = *n;
	unsigned int count = 0;

	while (temp > 0)
	{
		count++;
		temp >>= 1;
	}

	if (index >= count)
		return (-1);

	*n = *n | (1UL << index);

	return (1);
}

