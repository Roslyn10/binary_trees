#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 * Description - Finds the sibling of a node
 * @node: A pinter to the node to find the sibling
 * Return: NULL if node is NULL, the parent is NULL, or node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	if (node->parent->right == node)
	{
		return (node->parent->left);
	}

	return (node->parent->right);
}
