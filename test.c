#include <stdio.h>
#include "binary_trees.h"

int main(void)
{
	binary_tree_t *root;

	root = binary_tree_node(NULL, 98);

	printf("Before insert: %d\n", root->n);

	binary_tree_insert_left(root, 54);

	printf("After insert: %d\n", root->left->n);

	return (0);
}
