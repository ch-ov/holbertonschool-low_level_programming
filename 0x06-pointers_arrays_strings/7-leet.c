#include "main.h"
/**
 * leet -Eencodes a string into 1337.
 * @ptr: Pointer to string
 * Return: char*
 */
char *leet(char *ptr)
{
	int x, y;
	char let[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (x = 0; ptr[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (ptr[x] == let[y])
			{
				ptr[x] = num[y];
			}
		}
	}
	return (ptr);
}
