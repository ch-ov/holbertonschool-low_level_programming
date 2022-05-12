#include "main.h"
/**
 * _strlen -  Returns the length of a string.
 * @s: Pointer to be counted.
 * Return: x
 */
int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
		x++;
	return (x);
}
