#include <stdio.h>
#include "main.h"
/**
 * print_array - Prints a array n times
 * @a: Array to be printed
 * @n: NUmber of elements of the array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
	printf("\n");
}
