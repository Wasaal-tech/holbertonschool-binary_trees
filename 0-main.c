#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    printf("Root: %d\n", root->n);
    printf("Left: %d\n", root->left->n);
    printf("Right: %d\n", root->right->n);

    free(root->left);
    free(root->right);
    free(root);

    return (0);
}
