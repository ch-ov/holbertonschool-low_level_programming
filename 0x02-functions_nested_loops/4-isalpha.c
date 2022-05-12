#include "main.h"

/**
 * _isalpha - Define if a character is of type alphabetic.
 * @c: The variable to be examined.
 * Return: 1 if c is a letter, lowercase or uppercase, 0 if not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
