#include "main.h"

/**
 * print_chessboard - function that prints the chessboard
 * @a: char
 * @8: number of columns
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
