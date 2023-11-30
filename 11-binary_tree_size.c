#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	/* Initialize size variable */
	size_t size = 0;

	/* If tree is not NULL */
	if (tree)
	{
		/* Increment size by 1 */
		size += 1;

		/* Recursively calculate size of left subtree */
		size += binary_tree_size(tree->left);

		/* Recursively calculate size of right subtree */
		size += binary_tree_size(tree->right);
	}

	/* Return the size of the tree */
	return (size);
}
