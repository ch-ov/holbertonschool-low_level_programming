#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a square
 * @a: Pointer to array
 * @size: Size of array
 */
void print_diagsums(int *a, int size)
{
	int x, y, aux1, aux2, sum1 = 0, sum2 = 0;

	for (aux1 = 0, aux2 = 1; aux1 < size || aux2 < size; aux1++, aux2++)
	{
		x = (aux1 * size) + aux1;
		sum1 += a[x];
		y = (aux2 * size) - aux2;
		sum2 += a[y];
	}
	printf("%d, %d\n", sum1, sum2);
}
