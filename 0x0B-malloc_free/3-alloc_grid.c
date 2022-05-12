#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: Width of array.
 * @height: Height of array.
 * Return: int**
 */
int **alloc_grid(int width, int height)
{
	int x, y;
	int **aux;

	if (width <= 0 || height <= 0)
		return (NULL);

	aux = malloc(height * sizeof(*aux));
	if (aux == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		aux[x] = malloc(width * sizeof(**aux));
		if (aux[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(aux[x]);
			free(aux);
			return (NULL);
		}
		for (y = 0; y < width; y++)
			aux[x][y] = 0;
	}

	return (aux);
}
