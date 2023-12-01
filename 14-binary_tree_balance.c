#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL) {
		return 0;
	}

	/* Calculate the balance factor */
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	/* If tree is NULL, return 0 */
	if (tree == NULL) {
		return 0;
	}

	/* Calculate the height of the left subtree */
	size_t left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;

	/* Calculate the height of the right subtree */
	size_t right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

	/* Return the maximum height */
	return (left_height > right_height ? left_height : right_height);
}