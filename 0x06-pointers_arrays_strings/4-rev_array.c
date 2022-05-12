#include "main.h"
/**
 * reverse_array - Reverse a array of integers.
 * @a: Array to be reversed.
 * @n: Size of the array.
 */
void reverse_array(int *a, int n)
{
	int x;
	int aux;

	for (x = 0; x < n / 2; x++)
	{
		aux = a[x];
		a[x] = a[n - 1 - x];
		a[n - 1 - x] = aux;
	}
}
