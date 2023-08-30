#include "binary_trees.h"

/**
 * binary_tree_size - Measure the size of the binary tree.
 * @tree: pointer to the root node of the binary tree.
 * Return: 0 or size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsize;
	size_t rightsize;

	if (tree == NULL)
		return(0);
	leftsize = binary_tree_size(tree->left);
	rightsize = binary_tree_size(tree->right);
	return (1 + rightsize + leftsize);
}
