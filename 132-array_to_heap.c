#include "binary_trees.h"

/**
 * array_to_heap - Builds a Max Binary Heap tree from an array
 *
 * @array: Pointer to the first element of the array to be converted
 * @size: Number of element in the array
 *
 * Return: Pointer to the root node of the created Max Binary Heap,
 * or NULL on failure
 */
heap_t *array_to_heap(int *array, size_t size)
{
	size_t i;
	heap_t *root = NULL;

	if (!array || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		heap_insert(&root, array[i]);
	return (root);
}
