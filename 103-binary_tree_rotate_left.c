#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function that performs a
 * left-rotation on a binary tree
 *
 * @tree: pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (tree)
	{
		/*New parent*/
		tree->parent = tree->right;

		if (tree->right != NULL)
		{
			/*Swap left side to right node*/
			tree->right = tree->parent->left;
			/*Now left side is root*/
			tree->parent->left = tree;
			/*Change the pointer to parent*/
			tree = tree->parent;
			/*Parent is NULL now*/
			tree->parent = NULL;
		}
		return (tree);
	}
	return (NULL);
}

