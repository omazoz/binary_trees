#include "binary_trees.h"

/**
 * binary_tree_postorder - Insert a new node in the tree.
 *
 * @tree: Root of the tree.
 * @func: function to excecute.
 *
 * Return: Always 0 (Success)
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or func is NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Recursively traverse the left subtree */
    if (tree->left)
        binary_tree_postorder(tree->left, func);

    /* Recursively traverse the right subtree */
    if (tree->right)
        binary_tree_postorder(tree->right, func);

    /* Call func for the current node's value after visiting left and right subtrees */
    func(tree->n);
}
