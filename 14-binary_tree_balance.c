#include "binary_trees.h"

/**
 * tree_height - A function that measures the height of a binary tree
 * Description - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL or the height of the tree
 */

size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = tree->left ? 1 + tree_height(tree->left) : 0;
		right_height = tree->right ? 1 + tree_height(tree->right) : 0;
		return ((left_height > right_height) ? left_height : right_height);
	}
}

/**
 * binary_tree_balance - A function that measures the balance factor of tree
 * Description - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree to measure the balance
 * Return: 0 if the tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	return (tree_height(tree->left) - tree_height(tree->right));
}
