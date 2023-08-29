#include "binary_trees.h"
/**
 * binary_tree_postorder - postorder traversal in binary trees
 * @tree: pointer to the root of the binary tree.
 * @func: pointer to a function to call for each node's value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

