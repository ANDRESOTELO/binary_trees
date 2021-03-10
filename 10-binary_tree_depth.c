#include "binary_trees.h"

/**
 * binary_tree_depth - Function that measures the depth of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: height of the tree - 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	/*Checks if tree exists*/
	if (tree == NULL)
		return (0);

	/*Check if tree has a parent*/
	if (tree->parent)
		/*counter sum 1 unit and call the function again*/
		/*until finish*/
		counter = 1 + binary_tree_depth(tree->parent);

	return (counter);
}
