#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_dlistint - frees a doubly linked list.
 * @head: the head node of the list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	for (temp = NULL; head; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
