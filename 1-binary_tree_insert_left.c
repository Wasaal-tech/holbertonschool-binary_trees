#include <stdlib.h>
#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
	binary_tree_t *old_left;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	old_left = parent->left;

	node->n = value;
	node->parent = parent;
	node->left = old_left;
	node->right = NULL;

	if (old_left != NULL)
		old_left->parent = node;

	parent->left = node;

	return (node);
}
