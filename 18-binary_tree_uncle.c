/* FILEPATH: /home/topg/binary_trees/18-binary_tree_uncle.c */

#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* If node is NULL or has no parent or grandparent, return NULL */
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
	{
		return NULL;
	}

	/* If node's parent is the left child of its grandparent, return the right child of the grandparent */
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}

	/* If node's parent is the right child of its grandparent, return the left child of the grandparent */
	return (node->parent->parent->left);
}
