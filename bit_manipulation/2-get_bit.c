#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = n;
	unsigned int count = 0;

	while (temp > 0)
	{
		count++;
		temp >>= 1;
	}

	if (index >= count)
		return (-1);

	return ((n >> index) & 1);
}
