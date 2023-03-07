#include "main.h"

/**
 * print_chessboard - prints a chess board
 * @a: array input
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar([i][j]);
		_putchar('\n');
	}
}
