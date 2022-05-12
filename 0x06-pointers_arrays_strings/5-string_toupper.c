#include "main.h"
/**
 * string_toupper - Converts a lower String in a Uppercase
 * @ptr: Pointer to String
 * Return: char*
 */
char *string_toupper(char *ptr)
{
	int x;

	for (x = 0; ptr[x] != '\0'; x++)
	{
		if (ptr[x] >= 'a' && ptr[x] <= 'z')
			ptr[x] = ptr[x] - 32;
		else
			ptr[x] = ptr[x];
	}
	return (ptr);
}
