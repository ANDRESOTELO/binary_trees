#include "binary_trees.h"

/**
 * binary_tree_nodes - Function that counts the nodes with at least 1 child
 *
 * @tree: Pointer to the root node of the tree to count the number of nodes
 * Return: counts the nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);
	/*If left OR right exists call recursion*/
	if (tree->left != NULL || tree->right != NULL)
	{
		/*Recursevely sum in counter*/
		counter = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;
		return (counter);
	}
	return (0);
}
