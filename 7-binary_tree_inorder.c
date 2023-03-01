#include "binary_trees.h"
/**
 * binary_tree_inorder - print tree values in-order
 * @tree: The tree to iterate through
 * @func: Function pointer for print function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
