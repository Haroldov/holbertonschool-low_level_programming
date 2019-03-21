#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node - add a node at the beginning of the list
 *@head: pointer to a linked list
 *@str: string to be added
 *Return: address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	(*new).next = (*head)->next;
	(*head)->next = &new;
	return ((*head)->next);
}
