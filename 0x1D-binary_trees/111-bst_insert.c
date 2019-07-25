#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
bst_t *search(bst_t *root, int value);

/**
 *bst_insert - inserts a value in a Binary Search Tree
 *@tree: double pointer to the root node of the BST to insert the value
 *@value: the value to store in the node to be inserted
 *Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *parent = NULL;

	if (tree == NULL)
		return (NULL);
	if (*tree == NULL)
	{
		*tree = binary_tree_node(NULL, value);
		return (*tree);
	}
	parent = search(*tree, value);
	if (parent != NULL)
	{
		if (value < parent->n)
			return (binary_tree_node(parent, value));
		else if (value > parent->n)
			return (binary_tree_node(parent, value));
	}
	return (NULL);
}

/**
 *search - search for the location of a node
 *@root: root
 *@value: value of the pointer
 *Return: pointer to the parent
 */

bst_t *search(bst_t *root, int value)
{
	if (root == NULL)
		return (NULL);
	if (root->left == NULL && root->right == NULL)
		return (root);
	if (value > root->n)
	{
		if (root->right != NULL)
			return (search(root->right, value));
		else
			return (root);
	}
	else if (value < root->n)
	{
		if (root->left != NULL)
			return (search(root->left, value));
		else
			return (root);
	}
	else
		return (NULL);

}
