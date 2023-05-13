#include "binary_trees.h"

/**
 * binary_tree_insert_right - 'Inserts a node as the
 * right-child of another node.'
 * @parent: Is a pointer to the node to insert the
 * right-child in.
 * @value: Is the value to store in the new node.
 * Return: A pointer to the created node, or NULL
 * on failure or if parent is NULL.
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
        if (aux->right == NULL)
        {
            aux->right = add;
        }
        else
        {
            add->right = aux->right;
            aux->right->parent = add;
            aux->right = add;
        }
    }
    return (add);
}