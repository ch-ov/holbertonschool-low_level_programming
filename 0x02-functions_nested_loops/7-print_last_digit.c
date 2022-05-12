#include "main.h"
/**
 * print_last_digit - Prints last digit.
 * @x: Variable
 * Return: 0
 */
int print_last_digit(int x)
{
	if (x < 0)
	{
		x = ((-1) * (x % 10));
		_putchar((x % 10) + '0');
		return (x % 10);
	}
	else

	{
		x = (x % 10);
		_putchar((x % 10) + '0');
		return (x % 10);
	}
	return (0);
}
