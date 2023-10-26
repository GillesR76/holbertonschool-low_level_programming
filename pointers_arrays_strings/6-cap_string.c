#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: char
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '	' || s[i] == '\n' || s[i] == ',' || 
			s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' || 
			s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' || 
			s[i] == '}')

		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - 32;
		}
		i++;
	}

	return (s);
}
