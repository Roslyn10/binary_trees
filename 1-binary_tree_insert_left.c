#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node on the left
 * Description - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child
 * @value: The value to store in the new node
 * Return: Null on failure or if the parent is NULL...
 * ... A pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
