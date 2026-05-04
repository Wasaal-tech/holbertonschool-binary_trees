#include "binary_trees.h"

/**
 * binary_tree_height - measures height in edges
 * @tree: pointer to root node
 *
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	if (left > right)
		return (left);
	return (right);
}
