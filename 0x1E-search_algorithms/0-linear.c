#include <stdio.h>
#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of integers using the Linear
 *search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: If value is not present in array or if array is NULL, return -1
 *Return: return the first index where value is located
 */


int linear_search(int *array, size_t size, int value)
{
	int ind = 0;

	if (array == NULL)
		return (-1);
	for (; (size_t) ind < size; ind++)
	{
		printf("Value checked array[%i] = [%i]\n", ind, *(array + ind));
		if (*(array + ind) == value)
			return (ind);
	}
	return (-1);
}
