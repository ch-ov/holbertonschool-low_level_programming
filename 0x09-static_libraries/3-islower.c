#include "main.h"

/**
 * _islower - Define a lower case
 * @c: Define if a character is lower case.
 * Return: 1 if is a lower character, 0 if not.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
