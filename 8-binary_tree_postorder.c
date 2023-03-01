#include "binary_trees.h"
/**
 * binary_tree_postorder - print tree values post-order
 * @tree: The tree to iterate through
 * @func: Function pointer for print function
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);