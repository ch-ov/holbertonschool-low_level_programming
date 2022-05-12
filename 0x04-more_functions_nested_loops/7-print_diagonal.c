#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: number of times line be printed.
 */
void print_diagonal(int n)
{
	int x, y, espacios = 2;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x < n; x++)
	{
		for (y = 2; y < espacios; y++)
		{
			_putchar(' ');
		}
		espacios++;
		_putchar('\\');
		_putchar('\n');
	}
}
