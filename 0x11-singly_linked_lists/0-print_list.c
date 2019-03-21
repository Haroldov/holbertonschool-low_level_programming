#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list
 *@h: list to print
 *Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
		return (1);
	while (1)
	{
		if ((*h).str != NULL)
			printf("[%i] %s\n", (*h).len, (*h).str);
		else
			printf("[0] (nil)");
		i++;
		if ((*h).next == NULL)
			break;
		h = (*h).next;
	}

	return (i);
}
