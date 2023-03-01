#include "binary_trees.h"
/**
 * binary_tree_preorder - Preorder traversal
 * @tree: Binary tree tree
 * @func: Function to print the number
 * Return: Nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{
		return;
	}
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
