#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory of a int.
 * @b: Integer to be allocated by malloc.
 * Return: x, is the pointer to use malloc for b.
*/
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
