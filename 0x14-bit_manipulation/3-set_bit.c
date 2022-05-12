#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: Number to be converted
 * @index: Index starting from 0 of the bit we want to set
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(index > (sizeof(n) * 8)))
	{
		*n = *n | 1 << index;
		return (1);
	}
	return (-1);
}
