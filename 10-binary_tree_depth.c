#include "binary_trees.h"

/**
 * binary_tree_depth - A function that measures the depth of a node in tree
 * Description - Measures the depth of a node in a binary tree
 * @tree: A poinyer to the node to measure the depth
 * Return: 0 if tree is NULL, or the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree == NULL || tree->parent == NULL)
	{
		return (0);
	}
	else
	{
		return (1 + binary_tree_depth(tree->parent));
	}
}
