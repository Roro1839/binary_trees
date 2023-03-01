#include "binary_trees.h"
/**
 * binary_tree_insert_left - Function to insert left
 * @parent: The parent node
 * @value: The value for the node
 * Return: The new node pointer or NULL if fail
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = new_node->parent->left;
		parent->left = new_node;
		new_node->left->parent = new_node;
	}
	return (new_node);
}
