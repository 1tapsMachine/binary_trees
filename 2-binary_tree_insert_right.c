/* FILEPATH: /home/topg/binary_trees/2-binary_tree_insert_right.c */

#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Check if parent is NULL */
	if (parent == NULL)
		return (NULL);

	/* Create a new node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	/* If parent already has a right-child */
	if (parent->right != NULL)
	{
		/* Set the new node's right-child to parent's right-child */
		new_node->right = parent->right;
		/* Set the parent's right-child's parent to the new node */
		parent->right->parent = new_node;
	}

	/* Set parent's right-child to the new node */
	parent->right = new_node;

	/* Return the new node */
	return (new_node);
}
