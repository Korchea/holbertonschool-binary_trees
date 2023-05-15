#include "binary_trees.h"

/**
 * binary_tree_size - 'calculate the size of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_size = 0, right_size = 0;

	if (tree == NULL)
		return (0);
	else
	{
        if (tree->left != NULL)
		    left_size = binary_tree_size(tree->left);
        if (tree->right)
		    right_size = binary_tree_size(tree->right);

		return (left_size + right_size + 1);
	}
}
