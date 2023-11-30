/* FILEPATH: /home/topg/binary_trees/6-binary_tree_preorder.c */

#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func are not NULL */
	if (tree != NULL && func != NULL)
	{
		/* Call the function on the current node */
		func(tree->n);

		/* Traverse the left subtree in pre-order */
		binary_tree_preorder(tree->left, func);

		/* Traverse the right subtree in pre-order */
		binary_tree_preorder(tree->right, func);
	}
}
