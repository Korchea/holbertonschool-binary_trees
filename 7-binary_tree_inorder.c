#include "binary_trees.h"

/**
 * binary_tree_preorder - 'Goes through a binary
 * tree using in-order traversal.'
 * @tree: Is a pointer to the root node of the tree to traverse.
 * @func: Is a pointer to a function to call for each node.
 */

void binary_tree_ineorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	binary_tree_inorderr(tree->right, func);
	func(tree->n);
}