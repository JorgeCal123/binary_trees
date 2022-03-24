
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node
 * Return: balance value or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
		binary_tree_height(tree->right));
}

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
 * binary_tree_is_perfect - is a pointer to the root node
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
	if ((binary_tree_balance(tree) == 0))
	{
		if (left == 0 || right == 0)
			return (0);
		else 
		return (1);
	}
	else
		return (0)
}

