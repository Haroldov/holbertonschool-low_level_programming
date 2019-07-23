#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_tree_is_perfect - checks if a binary tree is perfect
 *@tree: pointer to the root node of the tree to check
 *Return: 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int tmp;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	tmp = binary_tree_is_perfect(tree->left)
		&& binary_tree_is_perfect(tree->right);
	return (tmp && binary_tree_height(tree->left) == binary_tree_height(
			tree->right));
}

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree to measure the height
 *Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);
	return (heightL > heightR ? heightL + 1 : heightR + 1);
}
