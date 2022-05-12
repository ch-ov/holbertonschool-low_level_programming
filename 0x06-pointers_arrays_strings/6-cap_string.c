#include "main.h"
/**
 * cap_string - Capitalize the first letter of the words
 * @ptr: Pointer to String
 * Return: char*
 */
char *cap_string(char *ptr)
{
	int x, y;
	char s[] = {' ', '\t', '\n', ',', ';', '.', '?', '"', '(', ')', '{', '}'};

	for (x = 0; ptr[x] != '\0'; x++)
	{
		if (x == 0 && ptr[x] >= 97 && ptr[x] <= 122)
			ptr[x] = ptr[x] - 32;
		for (y = 0; y < 12; y++)
		{
			if (ptr[x - 1] == s[y])
			{
				if (ptr[x] >= 97 && ptr[x] <= 122)
					ptr[x] = ptr[x] - 32;
			}
		}
	}
	return (ptr);
}
