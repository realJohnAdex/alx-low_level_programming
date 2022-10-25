#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements of a listint_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
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
