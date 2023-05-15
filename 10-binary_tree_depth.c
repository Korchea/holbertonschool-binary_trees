#include "binary_trees.h"

/**
 * binary_tree_depth - 'calculate the depth of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	else if (tree->parent == NULL)
		return (0);
	else
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}
}
