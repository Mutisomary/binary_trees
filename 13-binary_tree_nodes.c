#include "binary_trees.h"

/**
 * binary_tree_leaves - count the nodes with at least 1 child.
 * @tree: pointer to the root node of the binary tree.
 * Return: 0 or number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right_nodes;
	size_t left_nodes;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	right_nodes = binary_tree_nodes(tree->right);
	left_nodes = binary_tree_nodes(tree->left);

	return (1 + left_nodes + right_nodes);
}
