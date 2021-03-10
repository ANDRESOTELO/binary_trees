#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a binary tree node.
 *
 * @parent: Pointer to parent node.
 * @value: Data value.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/*Allocate memory for new_node*/
	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	/*Check if new_node malloc was created*/
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*To set value in the node data variable*/
	new_node->n = value;

	/*To assign pointer to parent node*/
	new_node->parent = parent;

	/*Initialize left and right nodes*/
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
