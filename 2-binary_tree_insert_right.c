#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a node at the right-child of another node.
 * @parent: pointer to the root node.
 * @value: value of the new node
 * Return: NULL or a pointer to the newnode
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
		return (NULL);

	newnode = malloc(sizeof(binary_tree_t));

	if (newnode == NULL)
		return (NULL);

	newnode->parent = parent;
	newnode->n = value;
	newnode->left = NULL;
	newnode->right = parent->right;
	parent->right = newnode;

	if (newnode->right)
	{
		newnode->right->parent = newnode;
	}
	return (newnode);
}
