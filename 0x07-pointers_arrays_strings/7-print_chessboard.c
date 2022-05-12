#include "main.h"
/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to string to be printed
 */
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8; x++)
	{
		for (y = 0; y < 8; y++)
		_putchar (a[x][y]);
		_putchar ('\n');
	}
}
