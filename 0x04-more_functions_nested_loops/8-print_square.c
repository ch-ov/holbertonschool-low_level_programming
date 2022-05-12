#include "main.h"
/**
 * print_square - Prints a square with a size specific
 * @size: number of rows and colums
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
