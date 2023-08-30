#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures depth of a node in a binary tree
 * @tree:pointer to root node
 * Return: depth of node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	for (depth = 0; tree->parent != NULL; depth++)
	{
		tree = tree->parent;
	}
	return (depth);
}
