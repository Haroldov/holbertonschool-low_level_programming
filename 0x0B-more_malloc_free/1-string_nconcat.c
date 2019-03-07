#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *string_nconcat - concatenates two strings
 *@s1: pointer to the first string
 *@s2: pointer to the second string
 *@n: number of bytes to concatenate
 *Return: pointer to the allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0;
	unsigned int tmp = 0;
	char *strcat;
	char *aux = "";

	if (s1 == NULL)
		s1 = aux;
	if (s2 == NULL)
		s2 = aux;

	while (*(s1 + size))
		size++;

	tmp = size;
	size = 0;

	while (*(s2 + size))
		size++;

	if (n >= size)
		size += tmp + 1;
	else
		size = tmp + 1 + n;

	strcat = malloc(size * sizeof(char));
	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}

	for (; size >= tmp; size--)
	{
		*(strcat + size) = *(s2 + size - tmp);
		if (size == tmp + 1 + n)
			*(strcat + size) = '\0';
	}

	for (;; size--)
	{
		*(strcat + size) = *(s1 + size);
		if (size == 0)
			break;
	}
	return (strcat);
}
