#include "main.h"

/**
 * _strcpy - function that copies a string
 * @dest: destination character array where the content is to be copied
 * @src: source character array which is to be copied
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest = '\0';
	return (dest);

}
