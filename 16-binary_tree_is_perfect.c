#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t h = binary_tree_height(tree);
    size_t c = binary_tree_size(tree);

    return (binary_tree_is_full(tree) && c == (1 << h) - 1);
}