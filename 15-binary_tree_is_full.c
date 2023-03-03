#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: tree is a pointer to the root node of the tree to check
 * Return: 0 if tree is not full or 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);

	if (left_side && right_side)
		return (1);

	return (0);
}
