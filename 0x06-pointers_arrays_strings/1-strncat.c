#include "main.h"
/**
 * _strncat - Concatenate two strings.
 * @dest: string destine.
 * @src: string source.
 * @n: number of bytes can be printed by src.
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && y < n; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}

