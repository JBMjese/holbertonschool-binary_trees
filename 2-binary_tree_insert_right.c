#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: A pointer to the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
	return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
	return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;

	if (parent->right != NULL)
	{
		newNode->right = parent->right;
		parent->right->parent = newNode;
	}
	else
	{
		newNode->right = NULL;
	}

	parent->right = newNode;

	return (newNode);
}
