#include "binary_trees.h"

/**
 * binary_tree_balance - 'calculate the balance of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_balance = 0, right_balance = 0;

	if (tree == NULL)
		return (0);
	if (*tree)
	{
		if (tree->left != NULL)
		{
			left_balance = binary_tree_balance(tree->left);
			left_balance++;
		}
		if (tree->right != NULL)
		{
			right_balance = binary_tree_balance(tree->right);
			right_balance++;
		}
		return (left_balance - right_balance);
	}
}
