#include "binary_trees.h"

/**
 * binary_tree_leaves - 'calculate the leaves of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaf = 0/*, right_leaf = 0*/;

	if (tree == NULL)
		return (0);
	else
	{
        if (tree->left != NULL)
            leaf++;
        if (tree->right != NULL)
            leaf++;
        if (leaf == 0 && tree->parent != NULL)
            leaf++;
        return (leaf);
		/*left_leaf = binary_tree_height(tree->left);
	    right_leaf = binary_tree_height(tree->right);

		if (left_leaf > right_leaf)
			return (left_leaf + 1);
		else
			return (right_leaf + 1);*/
	}
}
