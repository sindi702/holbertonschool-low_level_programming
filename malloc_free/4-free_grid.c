#include "main.h"
#include <stdlib.h>
/**
 *
 * free_grid - frees a two dimensional grid
 * @grid: two dimensional grid
 * @height: the height grid
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		row++;
	}

	free(grid);
}
