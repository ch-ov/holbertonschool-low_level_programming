#include "main.h"

/**
 * print_numbers - Entry point
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		_putchar((x % 10) + '0');
	_putchar('\n');
}
