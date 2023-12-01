#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	/* Variable to store the number of leaves */
	size_t num_leaves = 0;

	/* If the tree is not empty */
	if (tree)
	{
		/* If the current node is a leaf node */
		if (!tree->left && !tree->right)
		{
			/* Increment the number of leaves */
			num_leaves += 1;
		}

		/* Recursively count the leaves in the left subtree */
		num_leaves += binary_tree_leaves(tree->left);

		/* Recursively count the leaves in the right subtree */
		num_leaves += binary_tree_leaves(tree->right);
	}

	/* Return the number of leaves (wrapped in brackets) */
	return (num_leaves);
}
