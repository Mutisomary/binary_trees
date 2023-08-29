# include "binary_trees.h"

/**
 * binary_tree_node - Function creates a binary tree node.
 * @parent: pointer to the parent node.
 * @value: Value of the new node.
 * Return: NULL or pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = NULL;
	newnode->parent = parent;

	return (newnode);
}
