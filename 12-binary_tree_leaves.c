#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 * Return: The number of leaves in the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
    size_t leaves = 0;

    /* Check if the tree is NULL */
    if (!tree)
        return (0);

    /* Recursively count leaves in the left and right subtrees */
    leaves += binary_tree_leaves(tree->left);
    leaves += binary_tree_leaves(tree->right);

    /* If it's a leaf node, increment the count */
    if (!tree->left && !tree->right)
        leaves++;

    return (leaves);
}
