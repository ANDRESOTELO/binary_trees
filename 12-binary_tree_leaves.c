#include "binary_trees.h"

/**
 * binary_tree_leaves - Function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to count leaves
 * Return: counts the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counter_leaves = 0;

	/*If tree doesn't exists return 0*/
	if (tree == NULL)
		return (0);
	/*If child in left and right doesn't exists*/
	if (tree->left == NULL && tree->right == NULL)
	{
		counter_leaves = 1;
	}
	else
	{
		/*Recursively checks if child exists*/
		if (tree->left != NULL)
			counter_leaves += binary_tree_leaves(tree->left);
		if (tree->right != NULL)
			counter_leaves += binary_tree_leaves(tree->right);
	}
	return (counter_leaves);
}
