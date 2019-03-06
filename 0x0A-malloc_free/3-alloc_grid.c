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

	if (width <= 0 || height <= 0)
		return (NULL);

	tmp = (int *) malloc(size * sizeof(int));
	arr = (int **) malloc(height * sizeof(int *));

	if (arr == NULL || tmp == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(arr[i]);
		}
		free(arr);
		free(tmp);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		tmp += i * width;
		arr[i] = tmp;
		tmp = arr[0];
	}

	tmp = arr[0];

	for (i = 0; i < size; i++)
		tmp[i] = 0;
	return (arr);
}
