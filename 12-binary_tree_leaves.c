#include "binary_trees.h"

/**
 * binary_tree_leaves - A function that counts the leaves in a tree
 * Description - Counts the leaves in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of leaves
 * Return: 0 if tree is NULL and the number of leaves present
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		leaf_count += (!tree->left && !tree->right) ? 1 : 0;
		leaf_count += binary_tree_leaves(tree->right);
		leaf_count += binary_tree_leaves(tree->left);
	}

	return (leaf_count);

}
