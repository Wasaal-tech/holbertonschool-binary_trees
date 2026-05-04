#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);

	printf("Before:\n");
	printf("Root: %d\n", root->n);

	binary_tree_insert_left(root->right, 128);
	binary_tree_insert_left(root, 54);

	printf("After insert:\n");
	printf("Root: %d\n", root->n);

	return (0);
}
