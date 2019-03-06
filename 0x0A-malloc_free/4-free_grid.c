#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *
 *
 *
 *
 */

void free_grid(int **grid, int height)
{
	if (grid == NULL || height == 0)
	{
	}
	else
	{
		free(grid);
		free(grid[0]);
	}
}
