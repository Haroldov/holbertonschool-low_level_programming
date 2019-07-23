#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_leaves - counts the leaves in a binary tree
 *@tree: pointer to the root node of the tree to count the number of leaves
 *Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);
	heightL = binary_tree_leaves(tree->left);
	heightR = binary_tree_leaves(tree->right);
	return (heightL + heightR);
}
