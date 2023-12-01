#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	/* Variable to store the count of nodes */
	size_t node_count = 0;

	/* If tree is not NULL */
	if (tree)
	{
		/* If the current node has at least one child */
		if (tree->left || tree->right)
		{
			/* Increment the node count */
			node_count++;
		}

		/* Recursively count the nodes in the left subtree */
		node_count += binary_tree_nodes(tree->left);

		/* Recursively count the nodes in the right subtree */
		node_count += binary_tree_nodes(tree->right);
	}

	/* Return the node count */
	return (node_count);
}
