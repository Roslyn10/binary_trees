#include "binary_trees.h"

/**
 * binary_tree_height - A function that measures the height of a binary tree
 * Description - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return : 0 if tree is NULL or the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return (left_height = right_height ? left_height : right_height) + 1;
	}
}
