#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string of 0 and 1 chars
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
