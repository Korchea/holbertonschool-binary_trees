#include "binary_trees.h"

/**
 * binary_tree_depth - 'calculate the depth of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	else
	{
		if (binary_tree_is_root(tree) == 1)
			return (0);

		size_t left_depth, right_depth;

		left_depth = binary_tree_depth(tree->left);
		right_depth = binary_tree_depth(tree->right);

		if (left_depth > right_depth)
			return (left_depth + 1);
		else
			return (right_depth + 1);
	}
}
