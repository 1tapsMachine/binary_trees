/* FILEPATH: /home/topg/binary_trees/16-binary_tree_is_perfect.c */

#include "binary_trees.h"

/* Check if a node is a leaf of a binary tree */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/* Calculate the depth of a given node in a binary tree */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/* Get a leaf of a binary tree */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/* Check if a binary tree is perfect recursively */
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

/* Check if a binary tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return 0;
	}
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
