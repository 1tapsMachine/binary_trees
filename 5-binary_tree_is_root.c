/* FILEPATH: /home/topg/binary_trees/5-binary_tree_is_root.c */

#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1 (true).
 *         Otherwise - 0 (false).
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	/* If the node is NULL or it has a parent, it is not a root */
	if (node == NULL || node->parent != NULL)
	{
		return (0); /* Not a root */
	}

	return (1); /* Is a root */
}
