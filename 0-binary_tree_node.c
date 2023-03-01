#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
*binary_tree_node - create a tree without children
*@parent: The parent in the tree
*@value: The value to be inserted in the node
*Return: the node, else rteurn NULL
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/*create a newnode*/

	binary_tree_t *newnode;

	/*Allocate memory to the newnode*/

	newnode = malloc(sizeof(binary_tree_t));

	/*Check if the new node is empty*/
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = value;
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->right = NULL;
	return (newnode);
}
