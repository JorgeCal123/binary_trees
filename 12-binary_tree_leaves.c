#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - is a pointer to the root node
 * @tree:  is a pointer to the root node of the tree to count
 * Return: pointer to the new node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		size += 1;
	size += binary_tree_leaves(tree->left);
	size += binary_tree_leaves(tree->right);

	return (size);
}
