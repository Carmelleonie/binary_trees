#include "binary_trees.h"

/**
*binary_tree_size -  function that measures
*the size of a binary tree
*@tree: a pointer to the root node of
*the tree to measure the size
*Return: If tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	size_t left_side, right_side;

	left_side = binary_tree_size(tree->left);
	right_side = binary_tree_size(tree->right);

	return (left_side + right_side + 1);
}
