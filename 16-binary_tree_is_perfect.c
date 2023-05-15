#include "binary_trees.h"

/**
 * binary_tree_is_full - 'calculate the perfect of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_full = 1, right_full = 1;

    if (tree == NULL)
        return (0);
    if (tree->left == NULL && tree->right == NULL)
        return (1);
    if (tree->left == NULL && tree->right != NULL)
        return (0);
    if (tree->left != NULL && tree->right == NULL)
        return (0);
    left_full = binary_tree_is_full(tree->left);
    right_full = binary_tree_is_full(tree->right);
    
}
