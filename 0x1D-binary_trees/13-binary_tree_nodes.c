#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: pointer to the root node of the tree to count the number of nodes
 *Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	heightL = binary_tree_nodes(tree->left) + 1;
	heightR = binary_tree_nodes(tree->right);
	return (heightL + heightR);
}
