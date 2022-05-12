#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Initial String
 * @accept: String to be compared
 * Return: Unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (s[x] != accept[y])
			break;
	}
	return (x);
}
