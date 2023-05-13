#include "binary_trees.h"

/**
 * binary_tree_insert_left - 'Inserts a node as the left-child
 * of another node.'
 * @parent: Is a pointer to the node to insert the left-child in.
 * @value: Is the value to store in the new node.
 * Return: A pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *add, *aux;

    if (!value || !parent)
        return (NULL);
    add = malloc(sizeof(binary_tree_t));
    if (add == NULL)
        return (NULL);
    add->n = value;
    add->left = NULL;
    add->right = NULL;
    if (parent == NULL)
    {
        add->parent = NULL;
        parent = add;
    }
    else
    {
        aux = parent;
        add->parent = aux;
        if (aux->left == NULL)
        {
            aux->left = add;
        }
        else
        {
            add->left = aux->left;
            aux->left->parent = add;
            aux->left = add;
        }
    }
    return (add);
}