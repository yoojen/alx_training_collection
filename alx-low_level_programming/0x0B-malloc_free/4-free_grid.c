#include "main.h"
#include <stdlib.h>

/**
* free_grid -> free up pre-allocated size for grid
* @grid: param1
* @height: param2
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid && height > 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	free(grid);
	}
}
