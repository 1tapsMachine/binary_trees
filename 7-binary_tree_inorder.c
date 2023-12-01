#include "binary_trees.h"

/**
 * binary_tree_inorder - Performs in-order traversal on a binary tree.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 *         The function should take an integer argument.
 *         It will be called with the value of each node in the tree.
 *         The return value of the function is void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree and func are not NULL */
	if (tree != NULL && func != NULL)
	{
		/* Traverse the left subtree */
		binary_tree_inorder(tree->left, func);

		/* Call the function on the current node */
		(*func)(tree->n);

		/* Traverse the right subtree */
		binary_tree_inorder(tree->right, func);
	}
}
