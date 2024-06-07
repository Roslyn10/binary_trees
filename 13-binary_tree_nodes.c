#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes with 1 child
 * Description - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the number of nodes
 * Return: 0 is tree is NULL and the number of nodes with children
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		node += (tree->right || tree->left) ? 1 : 0;
		node += binary_tree_nodes(tree->right);
		node += binary_tree_nodes(tree->left);
	}

	return (node);
}
