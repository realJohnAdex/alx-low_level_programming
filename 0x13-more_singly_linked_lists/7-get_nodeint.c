#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: address of head
 * @index: the index of the node, starting at 0
 *
 * Return: nth node of a listint_t linked list, if node not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;
	listint_t *temp;

	n = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		n++;
		if (n == index)
		{
			return (temp);
		}
	}

	return (NULL);
}
