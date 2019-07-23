#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_right - inserts a node as the right-child of another node
 *@parent: pointer to the node to insert the right-child in
 *@value: value to store in the new node
 *Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	right_child = malloc(sizeof(binary_tree_t));
	if (parent == NULL || right_child == NULL)
	{
		free(right_child);
		return (NULL);
	}
	right_child->left = NULL;
	right_child->parent = parent;
	right_child->right = parent->right;
	right_child->n = value;
	parent->right = right_child;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	return (right_child);
}
