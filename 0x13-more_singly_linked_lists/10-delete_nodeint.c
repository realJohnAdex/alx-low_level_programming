#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: address of head
 * @index: the index of the node, starting at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *temp, *todelete;

	count = 0;
	while (*head != NULL)
	{
		if (index == 0)
		{
			todelete = *head;
			*head = (*head)->next;
			free(todelete);
			return (1);
		}
		count++;
		temp = *head;
		*head = (*head)->next;
		if (count == index)
		{
			todelete = temp->next;
			*head = (*head)->next->next;
			free(todelete);
			return (1);
		}
	}

	return (-1);
}
