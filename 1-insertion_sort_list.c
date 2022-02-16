#include "sort.h"

/**
 * swap_nodes - swap between 2 nodes
 *
 * @slow: pointer to the first node to swap
 * @fast: pointer to the second node to swap
 * @list: double linked list
 * Return: void
 */
void swap_nodes(listint_t **slow, listint_t **fast, listint_t **list)
{
	listint_t *before, *after;

	if (!(*slow) || !(*fast))
		return;
