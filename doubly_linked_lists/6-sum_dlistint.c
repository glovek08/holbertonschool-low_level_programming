#include <stddef.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 *			of a dlistint_t linked list.
 * @head: the head of the list.
 *
 * Return: the sum of all the data of a given list. 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (!head)
		return (sum);
	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
