#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the created node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newNode;

    if (parent == NULL)
        return (NULL);

    newNode = malloc(sizeof(binary_tree_t));

    if (newNode == NULL)
        return (NULL);

    newNode->n = value;
    newNode->parent = parent;
    newNode->right = NULL;

    if (parent->left != NULL)
    {
        newNode->left = parent->left;
        newNode->left->parent = newNode;
    }

    else
        newNode->left = newNode;

    parent->left = newNode;

    return (newNode);
}