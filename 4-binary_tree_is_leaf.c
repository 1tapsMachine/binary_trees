/* FILEPATH: /home/topg/binary_trees/4-binary_tree_is_leaf.c */

#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1 (true).
 *         Otherwise - 0 (false).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* If the node is NULL or has a left or right child, it is not a leaf */
	if (node == NULL || node->left != NULL || node->right != NULL)
	{
		return (0); /* Not a leaf, return false */
	}

	return (1); /* Node is a leaf, return true */
}
