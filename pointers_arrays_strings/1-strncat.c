#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: number of elements in the source string
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && x < n)
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';

	return (dest);
}
