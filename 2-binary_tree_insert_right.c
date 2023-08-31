#include "binary_trees.h"

/**
 * binary_tree_insert_right - Insert node as right-child
 *                            of another in binary tree.
 * @parent: Pointer to node to insert right-child in.
 * @value: Value to store in new node.
 *
 * Return: If parent is NULL or error occurs - NULL.
 *         Otherwise - pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
