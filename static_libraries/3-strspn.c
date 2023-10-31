#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: char string
 * @accept: char string
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (count);
}
