#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Returns the number of elements.
 * @h: A pointer to the head of the list_t list.
 * Return: The number of nodes in the list_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
