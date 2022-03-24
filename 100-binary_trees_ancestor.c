#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor -  is a pointer to the node to find the ancestor
 * @first: pointer to node
 * @second: pointer to node
 * Return: pointer to the new node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									const binary_tree_t *second)
{
	const binary_tree_t *i = first;
	const binary_tree_t *j = second;

	while (i != NULL)
	{
		while (j != NULL)
		{
			if (i == j)
				return ((binary_tree_t *)(i));
			j = j->parent;
		}
	i = i->parent;
	j = second;
	}

	return (NULL);
}
