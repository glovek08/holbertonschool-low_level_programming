#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the head of the node list.
 * @idx: target insertion index.
 * @n: node's data.
 *
 * Return: the address of the new node, 'NULL' on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int curr_index = 0;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; (curr_index < idx - 1) && temp; curr_index++)
		temp = temp->next;
	if (!temp || !new_node)
	{
		free(new_node);
		return (NULL);
	}
	if (!temp->next)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = temp->next;
	temp->next->prev = new_node;
	temp->next = new_node;
	return (new_node);
}
