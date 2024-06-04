#include "binary_trees.h"

/**
 * binary_tree_preorder - A function that goes through a binary tree
 * Description - Goes through a binary tree using pre-order traversal
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A pointer to a function to call for each node
 * Return: Nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
{
	if (tree == NULL || func == NULL)
	{
		return;
	}


