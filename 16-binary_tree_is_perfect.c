
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: is a pointer to the node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
        int leaf = 0;

        if (node->left == NULL && node->right == NULL)
                leaf = 1;

        return (leaf);
}

/**
 * binary_tree_is_full - is a pointer to the root node
 * @tree:  is a pointer to the root node of the tree to check
 * Return: pointer to the new node
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf(tree))
		return (1);
	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);
	if (left == 0 || right == 0)
		return (0);
	return (1);
}
