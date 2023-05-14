#include "binary_trees.h"

/**
 * binary_tree_depth - 'calculate the depth of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);
	else if (tree->parent == NULL)
		return (0);
	else
	{

		int left_depth = binary_tree_depth(tree->left);
		int right_depth = binary_tree_depth(tree->right);

		if (left_depth > right_depth)
			return (left_depth);
		else
			return (right_depth);
	}
}
