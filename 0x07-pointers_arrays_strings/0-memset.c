#include "main.h"
/**
 * _memset - Fills memory with a constant byte.
 * @s: Memory area to return pointer
 * @b: Constant byte what fills s.
 * @n: First bytes to be fill.
 * Return: A pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	char *y = s;

	for (x = 0; x < n; x++)
		y[x] = b;
	return (y);
}
