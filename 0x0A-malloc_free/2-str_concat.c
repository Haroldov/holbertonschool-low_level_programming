#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 *str_concat - concatenates two strings.
 *@s1: string number 1
 *@s2: string number 2
 *Return: point to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int tmp = 0;
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
	size += tmp + 1;

	strcat = malloc(size * sizeof(char));
	if (strcat == NULL)
	{
		free(strcat);
		return (NULL);
	}

	for (; size >= tmp; size--)
		*(strcat + size) = *(s2 + size - tmp);
	for (; size >= 0; size--)
		*(strcat + size) = *(s1 + size);
	return (strcat);
}
