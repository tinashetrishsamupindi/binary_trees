#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: a pointer to root node of the tree to count
 * Return: number of leaves or 0 if there is no tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
	}
	return (leaves);
}
