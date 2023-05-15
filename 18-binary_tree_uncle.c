#include "binary_trees.h"

/**
 * binary_tree_uncle - 'Finds the uncle of a node.'
 * @node: Is a pointer to the node to find the sibling.
 * Return: A pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    binary_tree_t *parent = node, *grandparent;

    if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
        return (NULL);
    parent = parent->parent;
    grandparent = parent->parent;
    if (grandparent->left == parent)
        return (grandparent->right);
    else
        return (grandparent->left);
}
