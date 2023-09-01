#include "binary_trees.h"

/**
 * binary_tree_node - Insert a new node in the tree.
 *
 * @parent: Parent node.
 * @value: Value of the node.
 *
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_binary_node;

    /* Allocate memory for the new binary tree node */
    new_binary_node = malloc(sizeof(binary_tree_t));
    if (new_binary_node == NULL)
        return (NULL);

    /* Set the value of the new node */
    new_binary_node->n = value;
    
    /* Initialize left and right child nodes as NULL */
    new_binary_node->left = NULL;
    new_binary_node->right = NULL;

    /* Set the parent node */
    new_binary_node->parent = parent;

    return (new_binary_node);
}


