#include "binary_trees.h"
/**
 * max - finds maximum height between two paths in a tree
 * @left: length of left path
 * @right: length of right path
 *
 * Return: max between the two paths
 */
int max(int left, int right)
{
	if (left < right)
		return (right);
	return (left);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);


	return (max(left, right) + 1);
}
/**
 * binary_tree_balance - Calculate the balance factor of a tree
 * @tree: The binary tree
 * Return: The bf
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
/**
 * binary_tree_is_full - Checks if binary tree is full
 * @tree: The binary tree root
 * Return: 0 if not full 1 if full
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);
        if (tree->left == NULL && tree->right == NULL)
                return (1);
        if (tree->left == NULL || tree->right == NULL)
                return (0);
        return (binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right));
}
/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: The tree root
 * Return: 0 if not perfect 1 if it is
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int fulltree, balance;
	
	if (tree == NULL)
		return (0);
	fulltree = binary_tree_is_full(tree);
	balance = binary_tree_balance(tree);

	if (fulltree == 1 && balance == 0)
		return (1);
	return (0);
}
