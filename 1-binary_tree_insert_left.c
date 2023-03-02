#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_insert_left - insert a node
*as the left-child of another node
*@parent: the parent of the left node
*@value: The data to be inserted into the left-child
*Return:NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	newnode->left = parent->left;
	newnode->right = NULL;

	if (parent->left != NULL)
	parent->left->parent = newnode;

	parent->left = newnode;
	return (newnode);
}
