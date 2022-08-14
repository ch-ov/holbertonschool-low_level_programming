#include "search_algos.h"
/**
 * binary_search - searches value in sorted array using Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: int (size_t)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t x, y = 0, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (low <= high)
	{
		y = (low + high) / 2;
		printf("Searching in array: ");

		x = low;
		while (x <= high)
		{
			printf("%d", array[x]);
			if (x < high)
				printf(", ");
			x++;
		}

		printf("\n");
	
		if (array[y] == value)
			return (y);

		else if (array[y] < value)
			low = y + 1;

		else
			high = y - 1;
	}

	return (-1);
}
