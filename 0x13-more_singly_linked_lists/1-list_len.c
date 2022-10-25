#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements of a list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
