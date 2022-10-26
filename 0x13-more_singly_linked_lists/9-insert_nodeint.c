#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node node at index
 * @head: address of head
 * @idx: the index of the node, starting at 0
 * @n: data of node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	count = 0;
	if (*head == NULL || new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
		if (count == (idx - 1))
		{
			new->next = temp->next;
			temp->next = new;
			return (*head);
		}
	}

	return (NULL);
}
