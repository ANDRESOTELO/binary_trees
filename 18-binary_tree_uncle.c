#include "binary_trees.h"

/**
 * binary_tree_uncle - Function that finds the uncle of a node
 *
 * @node: Pointer to the node to find the uncle
 * Return: return a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle = NULL;

	if (node && node->parent->parent && node->parent)
	{
		if (node->parent->parent->right
		    && node->parent->parent->right != node->parent)
			uncle = node->parent->parent->right;
		if (node->parent->parent->left
		    && node->parent->parent->left != node->parent)
			uncle = node->parent->parent->left;
		return (uncle);
	}
	return (NULL);
}
