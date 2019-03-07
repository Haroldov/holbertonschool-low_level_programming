#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
unsigned int auxFunc(char *str);

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
	char *aux1 = "";
	char *aux2 = "";

	if (s1 == NULL)
		s1 = aux1;
	if (s2 == NULL)
		s2 = aux2;
	size = auxFunc(s1);
	tmp = size;
	size = auxFunc(s2);
	if (n >= size)
		size += tmp + 1;
	else
		size = tmp + 1 + n;
	strcat = malloc(size * sizeof(char));
	if (strcat == NULL)
	{
		return (NULL);
	}
	size--;
	for (; size >= tmp; size--)
	{
		*(strcat + size) = *(s2 + size - tmp);
		if (size == tmp + n)
			*(strcat + size) = '\0';
		if (size == 0)
			break;
	}
	for (;; size--)
	{
		*(strcat + size) = *(s1 + size);
		if (size == 0)
			break;
	}
	return (strcat);
}

/**
 *auxFunc - auxiliar function
 *@str: computes lenght
 *Return: unsigned int number
 */

unsigned int auxFunc(char *str)
{
	unsigned int size = 0;

	while (*(str + size))
		size++;
	return (size);
}
