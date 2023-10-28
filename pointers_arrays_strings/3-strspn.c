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
	unsigned int i = 0;
	int len = 0;

		while (accept[len] != '\0')
			len++;

		for (i = 0; s[i] != '\0'; i++)
		{
			if (accept[i] == s[i])
			{
				len++;
			}
			else
			{	
				break;
			}
		}
	return (len);
}
