#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns pointer a new space in memory.
 * @str: String to be copied.
 * Return: s, the string to be copied.
*/
char *_strdup(char *str)
{
	int x;
	int y;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
	{
		x++;
	}

	s = malloc(sizeof(char) * x + 1);

	if (s == NULL)
	{
		return (NULL);
	}
	for (y = 0; y < x; y++)
	{
		s[y] = str[y];
	}
	return (s);

}
