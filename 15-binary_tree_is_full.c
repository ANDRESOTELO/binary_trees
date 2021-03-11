#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full
 *
 * @tree: Pointer to the root node of the tree to check
 * Return: Return 1 if is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/*If node is a leaf*/
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/*If left and right exists, and left & right subtrees are full*/
	if (tree->left && tree->right)
		/*Only if condition in if is complete*/
		return (binary_tree_is_full(tree->left)
			&& binary_tree_is_full(tree->right));
	return (0);
}
