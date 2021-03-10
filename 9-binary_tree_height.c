#include "binary_trees.h"

/**
 * binary_tree_height - Function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree - 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter_left = 0;
	size_t counter_right = 0;

	/*Checks if tree exists*/
	if (tree)
	{
/*Check if tree has a left_child*/
		if (tree->left)
		/*counter left sum 1 unit and call the function again*/
		/*until finish*/
		counter_left = 1 + binary_tree_height(tree->left);
		if (tree->right)
		/*counter right sum 1 and call the function again until finish*/
		counter_right = 1 + binary_tree_height(tree->left);
	/*Compare between left or right counter who is greater*/
		if (counter_left < counter_right)
			return (counter_right);
		else
			return (counter_left);
	}
	return (0);
}
