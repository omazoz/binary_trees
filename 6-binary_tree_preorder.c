#include "binary_trees.h"

/**
 * binary_tree_preorder - Insert a new node in the tree.
 *
 * @tree: Root of the tree.
 * @func: function to excecute.
 *
 * Return: Always 0 (Success)
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *tmp;

	if (tree == NULL || func == NULL)
		return;

	tmp = tree;
	if (tmp)
	{
		/* Call func for the current node's value */
		func(tmp->n);
		/* Recursively traverse the left subtree */
		if (tmp->left)
			binary_tree_preorder(tmp->left, func);
		/* Recursively traverse the right subtree */
		if (tmp->right)
			binary_tree_preorder(tmp->right, func);
	}
}
