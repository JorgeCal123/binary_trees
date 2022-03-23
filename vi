#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth
 * @tree: pointer to node
 * Return: cont
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t cont = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	cont = binary_tree_depth(tree->parent) + 1;
	return (cont);
}
