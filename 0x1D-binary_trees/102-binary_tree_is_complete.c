#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_is_complete - checks if a binary tree is complete
 *@tree: pointer to the root node of the tree to check
 *Return: 1 if tree
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int is_perf;

	if (tree == NULL)
		return (0);
	is_perf = binary_tree_is_perfect(tree);
	if (is_perf == 1)
		return (1);
	return (is_perf(tree, binary_tree_height(tree)));
}

/**
 *is_perf - check perfection
 *@tree: pointer to the root node of the tree to check
 *@h: height of the tree
 */
int is_perf(const binary_tree_t *tree, size_t h)
{
	if (tree == NULL)
		return (0);
	

}

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

/**
 *binary_tree_depth - measures the depth of a node in a binary tree
 *@tree: pointer to the node to measure the depth
 *Return: depth of the node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
