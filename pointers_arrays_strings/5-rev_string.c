#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int var1;
	int var2;
	char temp;


	while (s[len] != '\0')
	{
		len++;
	}
	for (var1 = 0, var2 = len - 1; var1 < var2; var1++, var2--)
	{
		temp = s[var1];
		s[var1] = s[var2];
		s[var2] = temp;
	}
}
