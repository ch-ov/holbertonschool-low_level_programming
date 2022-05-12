#include <stdio.h>
#include "main.h"
/**
 * times_table - Generate a table until 9
 * @x@y@z: Variables
 * Return: void.
 */
void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (y == 0)
				printf("%d, ", z);
			else if (y == 9)
				printf(" %d", z);
			else if (z < 10)
				printf(" %d, ", z);
			else if (y == 8)
				printf("%d,", z);
			else
				printf("%d, ", z);
		}
		printf("\n");
	}
}
