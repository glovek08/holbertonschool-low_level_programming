#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head node of the list.
 *
 * Return: the number of elements in @h.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *curr_node = h;

	if (!curr_node)
		return (0);

	while (curr_node)
	{
		curr_node = curr_node->next;
		node_count++;
	}
	return (node_count);
}
