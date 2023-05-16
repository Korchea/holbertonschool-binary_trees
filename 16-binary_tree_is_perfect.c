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
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
			left_size = binary_tree_size(tree->left);
		if (tree->right)
			right_size = binary_tree_size(tree->right);
		return (left_size + right_size + 1);
	}
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: The height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_count, right_count;

	if (tree == NULL)
		return (0);
	left_count = binary_tree_height(tree->left);
	right_count = binary_tree_height(tree->right);
	return (1 + (left_count > right_count ? left_count : right_count));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 *
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
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
