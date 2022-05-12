#include "main.h"
#include <stdio.h>
/**
 * print_number - Print an integer with putchar
 * @n: number
 * Return: void
 */
void print_number(int n)
{
	if (n > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
