#include <stdio.h>
#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of integers using the
 *Binary search algorithm
 *@array: pointer to the first element of the array to search in
 *@size: number of elements in array
 *@value: is the value to search for
 *Return: index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t ind = size % 2 == 0 ? (size / 2) - 1 : size / 2;
	int i = 0;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (; (size_t) i < size - 1; i++)
		printf("%i, ", *(array + i));
	printf("%i\n", *(array + i));
	if (value < *array || value > *(array + size - 1))
	{
		if (size == 1)
			return (-1);
		else if (*(array + ind) > value)
			return (binary_search(array, ind, value));
		else
			return (binary_search(array + ind + 1, size - (ind + 1), value)
				);
	}
	if (*(array + ind) == value)
		return (ind);
	else if (*(array + ind) > value)
		return (binary_search(array, ind, value));
	else
		return (binary_search(array + ind + 1, size - (ind + 1), value)
			+ ind + 1);
}
