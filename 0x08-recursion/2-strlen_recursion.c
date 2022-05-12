#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to String.
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
