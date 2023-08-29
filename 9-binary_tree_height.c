#include "binary_trees.h"

/**
 * binary_tree_height - Measure the height of a binary tree.
 * @tree: pointer to the root of the tree.
 * Return: 0 or height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height;
	size_t left_height;

	if (tree == NULL)
		return (0);
	right_height = binary_tree_height(tree->right);
	left_height = binary_tree_height(tree->left);

	return 1 + (left_height > right_height ? left_height : right_height);
}
