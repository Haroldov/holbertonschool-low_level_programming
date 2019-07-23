#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_sibling - finds the sibling of a node
 *@node: sibling of the node to be found
 *Return: pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->n < node->parent->n)
		return (node->parent->right);
	else
		return (node->parent->left);
}
