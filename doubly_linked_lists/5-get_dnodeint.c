#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the head node of the list.
 * @index: the index of the target node.
 *
 * Return: the node at @index. 'NULL' on failure.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int curr_node_index = 0;
	dlistint_t *temp = head;

	for (; curr_node_index < index && temp; curr_node_index++)
		temp = temp->next;
	if (curr_node_index == index && temp)
		return (temp);
	return (NULL);
}
