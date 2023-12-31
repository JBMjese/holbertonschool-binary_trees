#include "binary_trees.h"
/**
 * binary_tree_balance_aux - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor of the tree, or 0 if tree is NULL
 */
int binary_tree_balance_aux(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	if (binary_tree_balance_aux(tree->left) > binary_tree_balance_aux(tree->right))
	return (1 + binary_tree_balance_aux(tree->left));
	else
	return (1 + binary_tree_balance_aux(tree->right));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor or if tree is NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	return (0);
	return (binary_tree_balance_aux(tree->left) -
	binary_tree_balance_aux(tree->right));
}
