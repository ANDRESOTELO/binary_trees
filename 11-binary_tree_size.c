#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_size - function that measures the size of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: size of a binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t counter_left = 0;
	size_t counter_right = 0;
	size_t total_counter = 0;

	if (tree != NULL)
	{
		counter_left = binary_tree_size(tree->left);
		counter_right = binary_tree_size(tree->right);
		total_counter = counter_left + counter_right + 1;
		return (total_counter);
	}
	return (0);
}
