#include "main.h"
/**
 * puts_half - Prints half of a string.
 * @str: String to be printed
 */
void puts_half(char *str)
{
	int n, x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	if (x % 2 != 0)
	{
		for (n = (x - 1) / 2; n < x - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	else
	{
		for (y = x / 2; str[y] != '\0'; y++)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
