#include "binary_trees.h"

/**
 * binary_tree_height - 'calculate the height of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return 0;

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height > right_height ? left_height : right_height) + 1;
}
