#include"binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left-child of another node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *node;

	if (parent == NULL)
                return (NULL);

        node = malloc(sizeof(binary_tree_t));
        if (!node)
                return (NULL);

        node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

        if (parent->right != NULL)
                parent->right->parent = node;

	parent->right = node;
        return (node);
}
