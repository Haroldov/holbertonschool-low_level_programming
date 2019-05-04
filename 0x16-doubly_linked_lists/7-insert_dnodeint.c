#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position.
 *@h: header of the linked list
 *@idx: index to put the new node
 *@n: data of the new node
 *Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp = *h;

	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		(*new_node).n = n;
		(*new_node).next = *h;
		(*new_node).prev = NULL;
		*h = new_node;
		return (new_node);
	}
	idx--;
	while (tmp != NULL && idx != 0)
	{
		tmp = (*tmp).next;
		idx--;
	}
	if (idx == 0)
	{
		(*new_node).n = n;
		(*new_node).prev = tmp;
		(*new_node).next = (*tmp).next;
		(*tmp).next = new_node;
		if (new_node->next != NULL)
			(*(new_node->next)).prev = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
