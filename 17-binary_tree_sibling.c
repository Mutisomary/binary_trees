#include "binary_trees.h"
/**
 * binary_tree_sibling - funcrion to find sibling
 * @node: pointer to npde to find sibling
 * Return: pointer to sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *prnt = node->parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (prnt->left == node && prnt->right != NULL)
	{
		return (prnt->right);
	}
	if (prnt->right == node && prnt->left != NULL)
	{
		return (prnt->left);
	}
	return (NULL);
}
