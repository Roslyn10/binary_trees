#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node on the right
 * Description - Inserts a node as the right-child of another node
 * @parent: A pointer to the node to insert the right-child
 * @value: The value to store in the new node
 * Return: NULL on failure or NULL if parent is NULL...
 * ... Or pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;


	if (parent == NULL || new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}

