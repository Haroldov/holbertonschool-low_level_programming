#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *malloc_checked - allocates memory
 *@b: size of memory
 *Return: pointer to the allocated memory or 98 if not possible
 */

void *malloc_checked(unsigned int b)
{
	void *allocMem;

	allocMem = malloc(b);
	if (allocMem == NULL)
	{
		free(allocMem);
		exit(98);
	}
	return (allocMem);

}
