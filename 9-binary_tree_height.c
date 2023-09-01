#include "binary_trees.h"

/**
 * height_recursion - function that calculates the height using recursion
 *
 * @tree: node to find recursion
 * Return: the number of height nodes
 */

size_t height_recursion(const binary_tree_t *tree)
{
	size_t counter_left = 0, counter_right = 0;

	if (tree->left)
		counter_left = height_recursion(tree->left);
	if (tree->right)
		counter_right = height_recursion(tree->right);
	return ((counter_left > counter_right) ? counter_left + 1 : counter_right + 1);
}

/**
 * binary_tree_height - returns the height of a tree
 * @tree: is the node from which to get the node
 * Return: an integer with the height or 0 if node is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = height_recursion(tree->left);
		if (tree->right)
			right = height_recursion(tree->right);
		return (left > right ? left : right);
	}
	else
		return (0);
}
