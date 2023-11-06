#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: s1
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *duplicate = NULL;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s1 = ("");
	while (s1[len1])
	{
		len1++;
	}
	while (s2[len2])
	{
		len2++;
	}

	duplicate = malloc((len1 + len2) * sizeof(char) + sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		duplicate[i] = s1[i];
	}
	for (j = 0; j  < len2; j++)
	{
		duplicate[i + j] = s2[j];
	}
	duplicate[i + j] = '\0';

	return (duplicate);
	free(duplicate);
}
