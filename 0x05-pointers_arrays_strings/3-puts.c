#include "main.h"

/**
 * _puts - Prints a string
 * @str: Characters to be printed
 */
void _puts(char *str)
{
	int x = 0;

	while (*(str + x))
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar('\n');
}
