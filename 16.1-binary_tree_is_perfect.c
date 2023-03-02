#include "binary_trees.h"
#include <math.h>
/**
* binary_tree_s - finds the size of a tree
* @tree: the tree to find size
* Return: the size of the tree
*
* Note this add -lm flag in compilation. C :(
*/
int binary_tree_s(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);
	left = binary_tree_s(tree->left);
	right = binary_tree_s(tree->right);
	return (left + right + 1);
}
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
 * binary_tree_h - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure height
 *
 * Return: height of tree else 0
 */
int binary_tree_h(const binary_tree_t *tree)
{
        int left, right;

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);

        left = binary_tree_h(tree->left);
        right = binary_tree_h(tree->right);

        return (max(left, right) + 1);
}
/**
 * binary_tree_is_perfect - Checks if binary tree is perfect
 * @tree: The tree root
 * Return: 0 if not perfect 1 if it is
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int idealnodes, height, size;

	height = binary_tree_h(tree) + 1;
	size = binary_tree_s(tree);
	idealnodes = (int)(pow(2, height));
	idealnodes -= 1;
	if (idealnodes == size)
		return (1);
	return (0);
}
