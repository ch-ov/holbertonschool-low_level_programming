#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Create array of chars, initializes with a specific char.
 * @size: Size of char to be created.
 * @c: Char to be created.
 * Return: y.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *y;

	if (size == 0)
	{
		return (NULL);
	}

	y = malloc(sizeof(char) * size);

	if (y == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		y[x] = c;
	}
	return (y);
}
