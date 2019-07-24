#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *binary_tree_rotate_right - performs a right-rotation on a binary tree
 *@tree: pointer to the root node of the tree to rotate
 *Return: pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *tmp = NULL;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL && tree->right == NULL)
		return (tree);
	new_root = tree->left;
	new_root->parent = NULL;
	if (new_root->right != NULL)
	{
		tmp = new_root->right;
		tmp->parent = tree;
	}
	new_root->right = tree;
	tree->parent = new_root;
	tree->left = tmp;
	return (new_root);
}
