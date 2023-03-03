#include "binary_trees.h"
/**
*binary_tree_height -  a function that measures
*the height of a binary tree
*@tree: a pointer to the root node of the tree
*to measure the height
*Return:If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_side, right_side;


	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_side = binary_tree_height(tree->left);
	right_side = binary_tree_height(tree->right);

	if (left_side < right_side)
	{
		return (right_side + 1);
	}
	return (left_side + 1);
}
