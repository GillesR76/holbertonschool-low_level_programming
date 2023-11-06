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
	int i = 0;
	int j = 0;
	int len = 0;
	char *duplicate = NULL;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
	{	
		s1[i + j] = s2[j];
		j++
	}
	
	while (s1[i + j] != '\0')
		len++;

	duplicate = malloc(len * sizeof(char) + sizeof(char);

	if (duplicate == NULL)
		return (NULL);

	

	
}
