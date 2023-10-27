#include "main.h"

/**
 * memcpy - function that copies memory area
 * @dest: destination char string
 * @src: source char string
 * @n: unsigned integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
