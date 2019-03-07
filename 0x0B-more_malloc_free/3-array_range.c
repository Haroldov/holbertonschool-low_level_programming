#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *array_range - creates an array of integers
 *@min: min value
 *@max: max value
 *Return: pointer to
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int delta;

	if (min > max)
		return (NULL);
	delta = max - min;
	arr = malloc(sizeof(int) * (delta + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i <= delta; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
