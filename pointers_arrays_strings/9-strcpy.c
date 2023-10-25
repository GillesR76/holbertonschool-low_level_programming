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
	int x;
	int len;

	while (src[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	return (dest);

}
