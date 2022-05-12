#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: String complete
 * @accept: String to be searched.
 * Return: char*
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	for (; *s; s++)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
	}
	return ('\0');
}
