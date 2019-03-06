#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *free_grid - free a grid
 *@grid: grid to be released
 *@height: height of the grid
 *Return: none
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
