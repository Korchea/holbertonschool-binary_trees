#include "binary_trees.h"

/**
 * binary_tree_leaves - 'calculate the leaves of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaf = 0;

	if (tree == NULL)
		return (0);
	else
	{
	    leaf = binary_tree_leaves(tree->left);
	    leaf += binary_tree_leaves(tree->right);

        if (tree->left == NULL && tree->right == NULL)
            leaf++;
		return (leaf);
	}
}
