#include "main.h"
/**
 * puts2 - Print other character of a string.
 * @str: Prints other character of the string.
 */
void puts2(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{
	}
	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
