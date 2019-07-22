#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: the value to store in the new node
 *Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child;

	left_child = malloc(sizeof(binary_tree_t));
	if (parent == NULL || left_child == NULL)
	{
		free(left_child);
		return (NULL);
	}
	left_child->right = NULL;
	left_child->parent = parent;
	left_child->left = parent->left;
	left_child->n = value;
	parent->left = left_child;
	if (left_child->left != NULL)
		left_child->left->parent = left_child;
	return (left_child);
}
