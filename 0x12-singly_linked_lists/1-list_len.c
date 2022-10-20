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
	const list_t *l_list = h;

	n = 0;
	while (l_list != NULL)
	{
		n++;
		l_list = l_list->next;
	}
	return (n);
}
