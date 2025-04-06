#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a given dlistint_t list.
 * @h: the head node of the list.
 *
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;
	const dlistint_t *curr_node = h;

	if (!curr_node)
		return (0);
	while (curr_node)
	{
		printf("%i\n", curr_node->n);
		curr_node = curr_node->next;
		node_count++;
	}
	return (node_count);
}
