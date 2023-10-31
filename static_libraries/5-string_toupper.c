#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters to uppercase
 * @s: pointer to string
 *
 * Return: char
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	i++;
	}

	return (s);
}
