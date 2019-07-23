#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_size - measures the size of a binary tree
 *@tree: pointer to the root node of the tree to measure the size
 *Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	heightL = binary_tree_size(tree->left) + 1;
	heightR = binary_tree_size(tree->right);
	return (heightL + heightR);

}
