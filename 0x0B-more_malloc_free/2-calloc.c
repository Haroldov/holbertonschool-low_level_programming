#include <stdio.h>

/**
 *_calloc - allocates memory for an array
 *@nmemb: number of elements
 *@size: number of bytes per each element
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocMem;
	unsigned int i;

	if (nmemb <= 0  || size <= 0)
		return (NULL);
	allocMem = malloc(nmemb * size);
	if (allocMem == NULL)
	{
		free(allocMem);
		return (NULL);
	}
	for (i = 0; i <= nmemb * size; i++)
		*(allocMem + i) = 0;
	return (allocMem);
}
