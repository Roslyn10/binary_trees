#include "binary_trees.h"


/**
 * binary_tree_height - A function that measures the height of a binary tree
 * Description - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL or the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

		if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * Description - Measures the size of a binary tree
 * @tree: A pointer to the root node of the tree to measure the size
 * Return: 0 if the tree is NULL, the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 * Description - Checks if a binary tree is perfect
 * @tree: A pointer to the root node of the tree to check
 * Return: 0 if tree is NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height  = 0, size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	height = binary_tree_height(tree);
	size = (1 << (height + 1)) - 1;
	if (size == binary_tree_size(tree))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
