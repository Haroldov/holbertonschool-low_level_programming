#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_node - creates a binary tree node
 *@parent: is a pointer to the parent node of the node to create
 *@value: is the value to put in the new node
 *Return: pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	new_child = malloc(sizeof(binary_tree_t));
	if (new_child == NULL)
		return (NULL);
	if (parent != NULL && value < parent->n)
		parent->left = new_child;
	else if (parent != NULL && value > parent->n)
		parent->right = new_child;
	new_child->n = value;
	new_child->left = NULL;
	new_child->right = NULL;
	new_child->parent = parent;
	return (new_child);
}
