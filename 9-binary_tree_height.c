#include "binary_trees.h"

/**
 * binary_tree_height - 'calculate the height of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height > right_height)
			return (left_height);
		else
			return (right_height);
	}
}
