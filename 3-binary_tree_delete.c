#include "binary_trees.h"

/**
 * binary_tree_delete - Entry point
 * @tree: Tree root.
 *
 * Return: Always 0 (Success)
 */

void binary_tree_delete(binary_tree_t *tree)
{
	 if (tree == NULL)
        return;

    if (tree->left)
    {
        binary_tree_delete(tree->left);
        tree->left = NULL;  
    }
    
    if (tree->right)
    {
        binary_tree_delete(tree->right);
        tree->right = NULL; 
    }

    free(tree);
}
