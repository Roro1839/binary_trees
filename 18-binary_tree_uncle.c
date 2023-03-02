#include "binary_trees.h"
/**
 * binary_tree_uncle - Checks the binary tree uncle
 * @node: The node who's uncle we should check
 * Return: The address of uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *guks;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	guks = node->parent->parent;
	if (node == guks->left->right || node == guks->left->left)
		return (guks->right);
	if (node == guks->right->right || node == guks->right->left)
		return (guks->right);
	return (NULL);
}
