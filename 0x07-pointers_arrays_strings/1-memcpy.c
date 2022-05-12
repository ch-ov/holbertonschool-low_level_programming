#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: Destination array
 * @src: Array to be copied
 * @n: Size of array
 * Return: char*
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
