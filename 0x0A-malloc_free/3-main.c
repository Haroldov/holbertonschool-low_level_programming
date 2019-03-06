#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}   
}

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(1e7, 1e7);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 150, 150);
	printf("\n");
	grid[0][0] = 98;
	grid[149][149] = 402;
	print_grid(grid, 150, 150);
	return (0);
}
