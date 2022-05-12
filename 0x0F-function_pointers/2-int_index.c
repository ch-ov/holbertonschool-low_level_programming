#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Search for an integer
 * @array: Array of integers
 * @size: Size of Array
 * @cmp: Function pointer
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
