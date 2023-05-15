#include "binary_trees.h"

/**
 * binary_tree_is_full - 'calculate the perfect of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, i;
	size_t nodes;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	nodes = 1;

	for (i = 0; i < height; i++)
		nodes *= 2;

	return (nodes - 1 == binary_tree_size(tree));
}
