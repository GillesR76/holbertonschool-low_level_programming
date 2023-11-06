#include "main.h"

/**
 * _strdup - function that returns a pointer to a new space in memory
 * @str: string
 *
 * Return: pointer to the duplicted string
 */

char *_strdup(char *str)
{
	char *copy = NULL;
	int i;
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	copy = malloc(len * sizeof(char) + sizeof(char));

	if (copy == NULL)
		exit(1);

	for (i = 0; i < len; i++)
	{
		copy[i] = str[i];
	}

	return (copy);
}
