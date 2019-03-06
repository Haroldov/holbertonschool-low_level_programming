#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *alloc_grid - creates a 2 dimensional array of integers
 *@width: width of the array
 *@height: height of the array
 *Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int *tmp;
	int **arr;
	int i;
	int size = width * height;

	if (width <= 0 || height <= 0 || size <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));
	tmp = (int *) malloc(size * sizeof(int));

	if (arr == NULL || tmp == NULL)
	{
		free(tmp);
		free(arr);
		return (NULL);
	}


	for (i = 0; i < height; i++)
		arr[i] = tmp + (i * width);

	for (i = 0; i < size; i++)
		tmp[i] = 0;

	return (arr);
}
