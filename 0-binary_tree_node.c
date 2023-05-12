#include "binary_trees.h"

/**
 * binary_tree_node - 'Creates a binary tree node.'
 * @parent: Is a pointer to the parent node of the
 * node to create.
 * @value: Is the value to put in the new node.
 * Return: A pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *add, *aux;

	add = malloc(sizeof(binary_tree_t));
	if (add == NULL)
	{
		fprintf(stderr, "Error: node can't be created\n");
		return (NULL);
	}
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
		if (value < aux->n && aux->left == NULL)
        {
            aux->left = add;
        }
        else
        {
            aux->right = add;
        }
	}
    return (add);
}