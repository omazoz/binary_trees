#include "binary_trees.h"

/**
 * binary_tree_inorder - Entry point
 *
 * @tree: Root of the tree.
 * @func: function to excecute.
 * Return: Always 0 (Success)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* Check if tree or func is NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Recursively traverse the left subtree */
    if (tree->left)
        binary_tree_inorder(tree->left, func);

    /* Calling func for the current node's value */
    func(tree->n);

    /* Recursively traverse the right subtree */
    if (tree->right)
        binary_tree_inorder(tree->right, func);
}
