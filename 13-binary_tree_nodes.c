#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes.
 * @tree:  is a pointer to the root node
 * Return: number of nodes with at least 1 child.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;


	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		nodes++;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	return (nodes);
}
