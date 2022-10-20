#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: singly linked list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned long int n;
	const list_t *l_list = h;

	n = 0;
	while (l_list != NULL)
	{
		if (l_list->str == NULL)
		{
			printf("[0] (nil)\n");
		} else
		{
			printf("[%u] %s\n", l_list->len, l_list->str);
		}
		n++;
		l_list = l_list->next;
	}
	return (n);
}
