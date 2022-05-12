#include "main.h"
/**
 * flip_bits - Returns count number of bits to be flipped to convert A to B
 * @n: First Number
 * @m: Second Number
 * Return: unsigned int
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nBits;

	for (nBits = 0; n ^ m; n >>= 1, m >>= 1)
		nBits += (n ^ m) & 1;
	return (nBits);
}
