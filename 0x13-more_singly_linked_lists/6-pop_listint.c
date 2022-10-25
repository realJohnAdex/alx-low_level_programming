#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes the head  node of a listint_t list
 * @head: address of head
 *
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	n = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (n);
}
