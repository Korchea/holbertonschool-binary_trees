#include "binary_trees.h"

/**
 * binary_tree_height - 'calculate the height of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (!tree->left && !tree->right)
			return (0);
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		if (left_height == 0 && left_height == 0)
			return (1);
		if (left_height > right_height)
			return (left_height + 1);
		else
			return (right_height + 1);
		if (left_height == right_height)
			return (left_height + 1);
	}
}
