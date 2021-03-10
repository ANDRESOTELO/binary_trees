#include "binary_trees.h"

/**
 * binary_tree_delete - Function that deletes an entire binary tree
 *
 * @tree: pointer to the root node of the tree to delete
 * Return: Not return
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/*Recursion call the function for the left side*/
	binary_tree_delete(tree->left);

	/*Recursion call the function for the right side*/
	binary_tree_delete(tree->right);

	/*free node*/
	free(tree);
}
