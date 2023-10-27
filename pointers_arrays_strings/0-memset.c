#include "main.h"

/**
 * *_memeset - function that fills memory with a constant byte
 * @s: char
 * @b: char
 * @n: integer
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
