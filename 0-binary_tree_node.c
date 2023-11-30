/* Implementation of binary_tree_node function. */

#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node */
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
	
	if (new_node == NULL)
	{
		/* If an error occurs, return NULL */
		return (NULL);
	}

	/* Set the value and parent of the new node */
	new_node->n = value;
	new_node->parent = parent;

	/* Set the left and right child of the new node to NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return a pointer to the new node */
	return (new_node);
}
