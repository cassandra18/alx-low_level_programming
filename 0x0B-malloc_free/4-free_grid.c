#include <stdlib.h>
#include "main.h"
/**
 *free_grid - fress a two dim array of integers
 *@grid: the 2d array integer to be freed
 *@height: the height of grid
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
