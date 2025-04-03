#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the length of a given list.
 * @h: the given list.
 *
 * Return: the length of @h.
 */
size_t list_len(const list_t *h)
{
	size_t list_length = 0;

	if (!h)
		return (0);
	while (h)
	{
		list_length++;
		h = h->next;
	}
	return (list_length);
}
