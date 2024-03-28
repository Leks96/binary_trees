#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the binary tree, or 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    size_t leftHeight, rightHeight;

    if (tree == NULL)
        return (0);

    leftHeight = binary_tree_height(tree->left);
    rightHeight = binary_tree_height(tree->right);

    return(1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}