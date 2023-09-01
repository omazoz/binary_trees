#include "binary_trees.h"

/**
 * binary_tree_sibling - returns a pinter to the sibling of a node.
 *
 * @node: node.
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *child_right, *child_left;

	if (!node || !node->parent)
		return (NULL);

	child_right = node->parent->right;
	child_left = node->parent->left;
	return (child_right == node ? child_left : child_right);
}
