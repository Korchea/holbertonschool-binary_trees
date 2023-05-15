#include "binary_trees.h"

/**
 * binary_tree_nodes - 'calculate the nodes of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_node = 0, right_node = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	else
	{
		left_node = binary_tree_nodes(tree->left);
		right_node = binary_tree_nodes(tree->right);
		return (left_node + right_node + 1);
	}
}
