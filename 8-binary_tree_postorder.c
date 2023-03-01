#include "binary_trees.h"
/**
 * binary_tree_inorder - print tree values in-order
 * @tree: The tree to iterate through
 * @func: Function pointer for print function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	binary_tree_inorder(tree->right, func);
	func(tree->n);
}
