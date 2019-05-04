#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@head: head of the linked list
 *@idx: index of the node
 *@n: int to the new struct
 *Return: address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *tmp;
	unsigned int cont = 0;

	if (new == NULL || head == NULL)
		return (NULL);
	tmp = *head;
	new->n = n;
	while (cont != idx - 1 && tmp != NULL && idx != 0)
	{
		cont++;
		tmp = tmp->next;
	}
	if (*head == NULL || tmp != NULL)
	{
		if (idx == 0)
		{
			new->next = *head;
			new->prev = NULL;
			if (*head != NULL)
				(*head)->prev = new;
			*head = new;
		}
		else
		{
			new->next = tmp->next;
			new->prev = tmp;
			(tmp)->next = new;
			if (new->next != NULL)
				new->next->prev = new;
		}
		return (new);
	}
	else
	{
		free(new);
		return (NULL);
	}

}
