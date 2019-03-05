#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *create_array - creates an array of chars,
 *and initializes it with a specific char
 *@size: size of the array
 *@c: first character
 *Return: pointer to the array or NULL if failing
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < (size * sizeof(char)); i++)
		*(arr + i) = c;
	return (arr);
}
