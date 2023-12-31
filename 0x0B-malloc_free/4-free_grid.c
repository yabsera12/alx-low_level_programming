#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *		previously created by your alloc_grid function.
 * @grid: integer array inpute for 2 dimentional array.
 * @height: gtid height.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
