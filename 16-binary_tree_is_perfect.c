#include "binary_trees.h"
#include "11-binary_tree_size.c"
/**
 * binary_tree_is_perfect - function to check if its perfect
 * @tree: pointer to root node
 * Return: 1 for perfection
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leftnode_perf, rightnode_perf;

	if (tree == NULL)
	{
		return (0);
	}
	leftnode_perf = binary_tree_size(tree->left);
	rightnode_perf = binary_tree_size(tree->right);
	if (rightnode_perf == leftnode_perf)
	{
		return (1);
	}
	return (0);
}
