#include "binary_trees.h"

/**
 * binary_tree_balance - 'calculate the balance of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_factor = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left_height = binary_tree_balance(tree->left);
		if (left_height < 0)
			return (-1);
	}

	if (tree->right != NULL)
	{
		right_height = binary_tree_balance(tree->right);
		if (right_height < 0)
			return (-1);
	}

	balance_factor = left_height - right_height;

	if (balance_factor < -1 || balance_factor > 1)
		return (-1);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
