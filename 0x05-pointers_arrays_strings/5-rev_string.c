#include "main.h"
/**
 * rev_string - Revert a String
 * @s: String to be reversed.
 */
void rev_string(char *s)
{
	int x, y, z;
	char aux;

	for (x = 0; s[x] != '\0'; x++)
	{
	}
	z = x - 1;
	for (y = 0; y < x / 2; y++)
	{
		aux = s[y];
		s[y] = s[z];
		s[z--] = aux;
	}
}
