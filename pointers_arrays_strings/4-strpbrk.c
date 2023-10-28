#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 *
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	if (s[i] == accept[j])
		return (s + i);

	return (NULL);
}
