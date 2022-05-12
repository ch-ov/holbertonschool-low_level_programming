#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number to be converted
 * @index: Index starting from 0 of the bit we want to get
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit = (n >> index) & 1;

	if (!(index > (sizeof(n) * 8)))
		return (bit);
	return (-1);
}
