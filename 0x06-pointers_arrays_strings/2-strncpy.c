#include "main.h"
/**
 * _strncpy - Copy a string.
 * @dest: string destine.
 * @src: string source.
 * @n: counter of string.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	return (dest);
}
