#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of the binary tree
 * @node: The node provided
 * Return: NULL or sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
