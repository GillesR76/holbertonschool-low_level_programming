#include <stdio.h>

/**
 * main - Entry point
 *
 * print numbers from 1 to 100 and remplace multiples of 3 and five by words
 * Return: (0)
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz");
		}
		else if (x % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
