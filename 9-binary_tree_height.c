#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, the function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* If tree is not NULL */
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		/* Calculate the height of the left subtree */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		/* Calculate the height of the right subtree */
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

		/* Return the maximum height between left and right subtrees */
		return (left_height > right_height) ? left_height : right_height;
	}

	/* If tree is NULL, return 0 */
	return 0;
}
