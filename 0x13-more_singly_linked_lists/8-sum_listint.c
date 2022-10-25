#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: address of head
 *
 * Return: sum of all list n, if list is empty return 0
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
