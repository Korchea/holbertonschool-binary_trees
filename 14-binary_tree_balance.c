#include "binary_trees.h"

/**
 * binary_tree_balance - 'calculate the balance of a given tree'
 * @tree: Is a pointer to the root node of a tree
 * Return: depth from the root to a node given
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, left_balance, right_height, right_balance, balance_factor;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_balance(tree->left);
	left_balance = (left_height >= 0) ? left_height + 1 : -1;

	right_height = binary_tree_balance(tree->right);
	right_balance = (right_height >= 0) ? right_height + 1 : -1;

	balance_factor = left_balance - right_balance;

	if ((left_height < 0) || (right_height < 0) || (abs(balance_factor) > 1))
		return (-1);

	return ((left_balance > right_balance) ? left_balance : right_balance);
}
