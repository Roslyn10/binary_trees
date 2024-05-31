#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 * Description - Creates a binary tree node
 * @parent: A pointer to the parent node of the node to create
 * @value: Is the value to put in the new node
 * Return: A pointer to the new node/ NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
