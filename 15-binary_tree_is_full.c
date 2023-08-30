#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary is full
 * @tree: pointer to the root node.
 * Return: 0 or 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	/*check if the current node is a leaf*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/*Check if the current node has 2 chuldren*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	/*else the tree is not full*/
	return (0);
}
