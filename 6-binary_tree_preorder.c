#include "binary_trees.h"

/**
 * binary_tree_preorder - Function that traverse a binary tree using pre-order
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: No return, void function
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/*Function that prints the root of tree or subtree*/
	func(tree->n);
	/*Recursively traverse tree*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
