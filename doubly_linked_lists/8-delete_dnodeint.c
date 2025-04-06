#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at the index of
 *			a dlistint_t linked list.
 * @head: the head of the list.
 * @index: the insertion target index.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int curr_index = 0;
	dlistint_t *temp;

	if (!head)
		return (-1);
	temp = *head;
	for (; (curr_index < index) && temp; curr_index++)
		temp = temp->next;
	if (!temp)
		return (-1);
	if (!temp->prev)
		*head = temp->next;
	else
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
