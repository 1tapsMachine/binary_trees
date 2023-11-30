#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, the function returns 0.
 *         Otherwise, it returns the depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	/* If tree is NULL or has no parent, return 0 */
	if (tree == NULL || tree->parent == NULL)
	{
		return 0;
	}
	else
	{
		/* Recursively calculate the depth of the parent node */
		size_t parent_depth = binary_tree_depth(tree->parent);
		
		/* Return the depth of the current node (parent depth + 1) */
		return (parent_depth + 1);
	}
}
