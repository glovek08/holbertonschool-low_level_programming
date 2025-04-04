#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - adds a node to a given list.
 * @head: the first node of the list.
 * @str: the value to be insterted into the node.
 *
 * Return: the address of the new element, 'NULL' on failure.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node || !str)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(new_node->str);

	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
