#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 * Return: range if success.
*/
int *array_range(int min, int max)
{
	int *range;
	int total, counter;

	if (min > max)
		return (NULL);
	total = max - min + 1;
	range = malloc(sizeof(int) * total);
	if (range == NULL)
		return (NULL);
	for (counter = 0; min <= max; counter++)
	{
		range[counter] = min;
		min++;
	}
	return (range);
}
