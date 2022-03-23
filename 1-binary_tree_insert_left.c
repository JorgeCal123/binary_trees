#include"binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	node = malloc(sizeof(binary_tree_t));

	if (!node || parent == NULL)
		return (NULL);

	node->n = value;
	if (parent->left == NULL)
	{
		node->parent = parent;
		node->right = NULL;
		parent->left = node;
	}
	else
	{
		node->left = parent->left;
		node->right = NULL;
		node->parent = parent;
		parent->left->parent = node;
		parent->left = node;
	}
	return (node);
}
