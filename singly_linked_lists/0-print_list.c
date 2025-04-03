#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a given list.
 * @h: the pointer to the current node.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
			node_count++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			node_count++;
		}
	}
	return (node_count);
}
