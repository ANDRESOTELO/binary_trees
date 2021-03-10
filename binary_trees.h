#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */

struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

/*Basic Binary Tree*/
typedef struct binary_tree_s binary_tree_t;

/*Binary Search Tree*/
typedef struct binary_tree_s bst_t;

/*AVL Tree*/
typedef struct binary_tree_s avl_t;

/*Max Binary Heap*/
typedef struct binary_tree_s heap_t;

/*Binary tree print*/
void binary_tree_print(const binary_tree_t *);

/*Function that creates a binary tree node*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/*Function that inserts a node as the left-child of another node*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

/*Function that inserts a node as the right-child of another node*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

/*Function that deletes an entire binary tree*/
void binary_tree_delete(binary_tree_t *tree);

/*Function that checks if a node is a leaf*/
int binary_tree_is_leaf(const binary_tree_t *node);

/*Function that checks if a given node is a root*/
int binary_tree_is_root(const binary_tree_t *node);

/*Function that goes through a binary tree using pre-order traversal*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

/*Function that goes through a binary tree using in-order traversal*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

/*Function that goes through a binary tree using post-order traversal*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

#endif /* _BINARY_TREES_H_ */