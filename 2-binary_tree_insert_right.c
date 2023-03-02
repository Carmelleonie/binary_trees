#include "binary_trees.h"

/**
*binary_tree_insert_right - insert a node as the right of another node
*@parent: The parent of the right node in the tree
*@value: the value to be inserted  inthe node
*Return: Newnode or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
	{
		return (NULL);
	}
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->right = parent->right;
	newnode->left = NULL;

	if (parent->right != NULL)
	parent->right->parent = newnode;

	parent->right = newnode;
	return (newnode);
}
