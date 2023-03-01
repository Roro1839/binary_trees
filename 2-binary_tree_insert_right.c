#include "binary_trees.h"
/**
 * binary_tree_insert_right - Function to insert left
 * @parent: The parent node
 * @value: The value for the node
 * Return: The new node pointer or NULL if fail
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		new_node->right = new_node->parent->right;
		parent->right = new_node;
		new_node->right->parent = new_node;
	}
	return (new_node);
}
