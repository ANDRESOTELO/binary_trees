#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that inserts a node as the left-child
 *
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 * Return: A pointer to created node, or NULL on failure or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	/*If parent not exists return NULL*/
	if (parent == NULL)
		return (NULL);

	/*Allocate memory for new node*/
	new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	/*If allocation fails*/
	if (new_node == NULL)
		return (NULL);

	/*Assign values for the new_node*/
	new_node->n = value;
	/*new_node parent is now the parent that receive the function*/
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/*If left child exists*/
	if (parent->left)
	{
		/*New_node change position with left_child*/
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	/*If parent exists, new_node->parent = parent in node creation*/
	if (new_node->parent)
		parent->left = new_node;

	return (new_node);
}
