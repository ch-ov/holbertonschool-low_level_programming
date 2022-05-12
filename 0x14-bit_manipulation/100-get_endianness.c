#include "main.h"
/**
 * get_endianness - Checks the endianness.
 * Return: int
 */
int get_endianness(void)
{
	int x = 1;
	char *c = (char *) &x;

	return (*c);
}
