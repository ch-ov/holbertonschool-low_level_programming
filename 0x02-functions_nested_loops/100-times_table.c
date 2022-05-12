#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Generate a table until n times.
 * @n: Number for the table.
 * Return: void.
 */
void print_times_table(int n)
{
	int x, y, z;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (n > 15 || n < 0)
				return;
			if (y == 0)
				printf("%d", z);
			else if (y == n && z < 10 && z < 100)
				printf(",   %d", z);
			else if (y == n && z >= 10 && z < 100)
				printf(",  %d", z);
			else if (y == n && z >= 100 && z < 1000)
				printf(", %d", z);
			else if (z < 10)
				printf(",   %d", z);
			else if (z >= 10 && z < 100)
				printf(",  %d", z);
			else if (z >= 100 && z < 1000)
				printf(", %d", z);
			else
				printf(",%d", z);
		}
		printf("\n");
	}
}
