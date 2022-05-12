#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: String
 * @c: Character to be founded
 * Return: char*
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	if (*s == c)
		return (s);
	return ('\0');
}
