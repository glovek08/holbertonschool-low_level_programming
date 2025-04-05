#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - frees a given singly linked list.
 * @head: the first node of the list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *temp;

	if (!head)
		return;

	for (temp = NULL; head; head = temp)
	{
		temp = head->next;
		free(head);
	}
}
