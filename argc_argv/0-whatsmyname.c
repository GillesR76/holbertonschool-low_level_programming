#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: first argument
 * @argv: second argument
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	argc = 1;

	if (argc)
	{
		printf("%s\n", *argv);
	}

	return (0);
}
