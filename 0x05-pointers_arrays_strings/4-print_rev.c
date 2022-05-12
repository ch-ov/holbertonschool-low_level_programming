#include "main.h"

/**
 * print_rev - Print a string in reverse
 * @s: String to be reversed.
 */
void print_rev(char *s)
{
	int x = 0;

	while (*(s + x))
		x++;
	x--;
	while (x >= 0)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar('\n');
}
