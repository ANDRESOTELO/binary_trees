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
			counter_right = 1 + binary_tree_height(tree->right);
		/*Compare between left or right counter who is greater*/
		if (counter_left > counter_right)
			return (counter_left);
		else
			return (counter_right);
	}
	return (0);
}

/**
 * binary_tree_balance - Function that measures the balance factor
 *
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: measures the balance factor of a binary tree or 0 if fails
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;
	int balance_factor = 0;

	if (tree == NULL)
		return (0);

	/*check if left node exists*/
	if (tree->left)
		/*recursively call function height and add 1 to counter*/
		left_height = binary_tree_height(tree->left) + 1;

	/*check if right node exists*/
	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	/*balance factor is left height - right height*/
	balance_factor = left_height - right_height;

	return (balance_factor);
}
