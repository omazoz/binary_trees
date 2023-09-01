#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with at least 1 child in a binary tree.
 *
 * @tree: Pointer to the root node of the tree.
 * Return: The number of nodes with at least 1 child, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t nodes = 0;

    /* Check if the tree is NULL */
    if (!tree)
        return (0);

    /* Recursively count nodes with at least 1 child in the left and right subtrees */
    nodes += binary_tree_nodes(tree->left);
    nodes += binary_tree_nodes(tree->right);

    /* If it has at least 1 child, increment the count */
    if (tree->left || tree->right)
        nodes++;

    return (nodes);
}
