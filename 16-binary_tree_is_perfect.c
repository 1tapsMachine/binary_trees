/* FILEPATH: /home/topg/binary_trees/16-binary_tree_is_perfect.c */

#include "binary_trees.h"
/**
 * is_leaf - Checks if a node is a leaf.
 * @node: A pointer to the node to check.
 * Return: If the node is a leaf - 1.
*/
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth of.
 * Return: If tree is NULL, your function must return 0.
*/
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Gets the leaf of a binary tree.
 * @tree: A pointer to the node to start the search at.
 * Return: A pointer to the leaf.
*/
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of the first leaf found.
 * @level: The level of the current node.
 * Return: If the tree is perfect - 1.
*/
int is_perfect_recursive(const binary_tree_t *tree,
						 size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
			is_perfect_recursive(tree->right, leaf_depth, level + 1));
}
/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
