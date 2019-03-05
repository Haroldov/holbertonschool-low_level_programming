#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *_strdup - copy a string
 *@str: string to be copyied
 *Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	int size = 0;
	char *cpystr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + size) != '\0')
		size++;

	cpystr = malloc(size * sizeof(char));

	if (cpystr == NULL)
	{
		free(cpystr);
		return (NULL);
	}
	for (; size >= 0; size--)
		*(cpystr + size) = *(str + size);
	return (cpystr);
}
