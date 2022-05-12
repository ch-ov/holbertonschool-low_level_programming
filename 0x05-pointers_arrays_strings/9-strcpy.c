#include "main.h"
/**
 * _strcpy - Copy a String
 * @dest: String where the copy goes
 * @src: String to be copied
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}
