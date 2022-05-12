#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: Grid to be freed
 * @height: Height of grid.
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
