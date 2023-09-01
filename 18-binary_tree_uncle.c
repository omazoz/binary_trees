#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a binary tree node.
 *
 * @node: Pointer to the node for which to find the uncle.
 * Return: Pointer to the uncle node, or NULL if not found or invalid input.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *temp;

    /* Check if node, parent, and grandparent are all present */
    if (!node || !node->parent || !node->parent->parent)
        return (NULL);

    temp = node->parent;

    /* Return the sibling of the parent if it exists, or NULL if not */
    return (temp->parent->left == temp ? temp->parent->right : temp->parent->left);
}
