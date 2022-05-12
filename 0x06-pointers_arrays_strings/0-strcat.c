#include "main.h"
/**
 * _strcat - Concatenate two strings.
 * @dest: string destine.
 * @src: string source.
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	for (x = 0; dest[x] != '\0'; x++)
	{
	}
	for (y = 0; src[y] != '\0' && y < x; y++)
	{
		dest[x] = src[y];
		x++;
	}
	return (dest);
}

