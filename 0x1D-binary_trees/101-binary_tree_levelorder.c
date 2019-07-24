#include <stdlib.h>
#include "binary_trees.h"

void print_leaves(const binary_tree_t *tree, void (*func)(int));

/**
 *binary_tree_levelorder - goes through a binary tree usinglevel-ordertraversal
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *Return: none
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->parent != NULL && tree->n < tree->parent->n)
		func(tree->parent->n);
	binary_tree_levelorder(tree->left, func);
	binary_tree_levelorder(tree->right, func);
	/* if (tree->parent == NULL) */
	/* 	print_leaves(tree, func); */
}

/**
 *print_leaves - print all the leaves
 *@tree: pointer to the root node of the tree to traverse
 *@func: pointer to a function to call for each node
 *Return: none
 */

void print_leaves(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (tree->left == NULL && tree->right == NULL)
		func(tree->n);
	print_leaves(tree->left, func);
	print_leaves(tree->right, func);
}
