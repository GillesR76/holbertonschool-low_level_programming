#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: unsigned int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1 = 0, len2 = 0;
	char *duplicate = NULL;

	if (s1 == NULL)
		s1 = ("");
	if (s2 == NULL)
		s2 = ("");

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
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

	if (n >= len2)
		n = len2;

	for (j = 0; j < n; j++)
	{
		duplicate[i + j] = s2[j];
	}
	duplicate[i + j] = '\0';
	return (duplicate);
}

