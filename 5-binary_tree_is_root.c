#include "binary_trees.h"
/**
*binary_tree_is_root - check if the node is a root
*@node: the node
*Return: If node is NULL, return 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left != NULL && node->right != NULL && node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
