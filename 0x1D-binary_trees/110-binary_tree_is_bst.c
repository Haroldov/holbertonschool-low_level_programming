#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
int check_if_dividedL(const binary_tree_t *tree, int root);
int check_if_dividedR(const binary_tree_t *tree, int root);

/**
 *binary_tree_is_bst - checks if a binary tree is a valid
 *@tree: pointer to the root node of the tree to check
 *Return: 1 if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (check_if_dividedL(tree->left, tree->n) && check_if_dividedR(tree->right, tree->n));
}

/**
 *check_if_dividedL - checks if all number less than root are in the left
 *@tree: pointer to tree
 *@root: number of the root
 *Return: 1 if divided well
 */

int check_if_dividedL(const binary_tree_t *tree, int root)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
	{
		if (tree->n < tree->right->n && tree->right->n < root && tree->n < root)
			return (check_if_dividedL(tree->right, root));
		else
			return (0);
	}
	if (tree->right == NULL && tree->left != NULL)
	{
		if (tree->n > tree->left->n && tree->left->n < root && tree->n < root)
			return (check_if_dividedL(tree->left, root));
		else
			return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->n > tree->left->n && tree->n < tree->right->n && tree->left->n < root && tree->right->n < root && tree->n < root)
		return (check_if_dividedL(tree->left, root) && check_if_dividedL(tree->right, root));
	else
		return (0);
}

/**
 *check_if_dividedR - checks if all number less than root are in the right
 *@tree: pointer to tree
 *@root: number of the root
 *Return: 1 if divided well
 */

int check_if_dividedR(const binary_tree_t *tree, int root)
{
	if (tree == NULL)
		return (1);
	if (tree->left == NULL && tree->right != NULL)
	{
		if (tree->n < tree->right->n && tree->right->n > root && tree->n > root)
			return (check_if_dividedR(tree->right, root));
		else
			return (0);
	}
	if (tree->right == NULL && tree->left != NULL)
	{
		if (tree->n > tree->left->n && tree->left->n > root && tree->n > root)
			return (check_if_dividedR(tree->left, root));
		else
			return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->n > tree->left->n && tree->n < tree->right->n && tree->left->n > root && tree->right->n > root && tree->n > root)
		return (check_if_dividedR(tree->left, root) && check_if_dividedR(tree->right, root));
	else
		return (0);
}
