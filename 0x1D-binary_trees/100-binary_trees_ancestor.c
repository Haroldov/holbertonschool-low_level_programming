#include <stdlib.h>
#include "binary_trees.h"

/**
 *binary_trees_ancestor - finds the lowest common ancestor of two nodes
 *@first: pointer to the first node
 *@second: pointer to the second node
 *Return: pointer to the lowest common ancestor node of the two given nodes
 *If no common ancestor was found, your function must return NULL
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t first_depth, second_depth;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first->n == second->n)
		return ((binary_tree_t *)first);
	first_depth = binary_tree_depth(first);
	second_depth = binary_tree_depth(second);
	if (first_depth < second_depth)
		return (binary_trees_ancestor(first, second->parent));
	else
		return (binary_trees_ancestor(first->parent, second));
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
