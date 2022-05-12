#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes function on each element of array
 * @array: Array of integers
 * @size: Size of array
 * @action: Function Pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
