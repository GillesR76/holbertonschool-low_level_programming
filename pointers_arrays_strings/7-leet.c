#include "main.h"

/**
 * leet - function that encodes a string
 * @s: string
 *
 * Return: char
 */

char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "44330077113";

	while (s[i] != '\0')
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str1[j] == s[i])
			{
				s[i] = str2[j];
				break;
			}
		}
	i++;
	}
	return (s);
}
