#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 * Return: return a pointer to the sibling node
 */


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *siblings = NULL;

	/*condition if node is NULL the node does not exists*/
	/*condition if node parent is NULL, the node is the root*/
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/*chcek the sibling on left and check if the node is not the same*/
	if (node->parent->left && node->parent->left != node)
		siblings = node->parent->left;
	/*chcek the sibling on left and check if the node is not the same*/
	if (node->parent->right && node->parent->right != node)
		siblings = node->parent->right;
	return (siblings);
}
