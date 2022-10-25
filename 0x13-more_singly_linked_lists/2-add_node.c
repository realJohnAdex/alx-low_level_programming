#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of head
 * @str: string
 *
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	unsigned int len;
	list_t *new;

	len = 0;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	str_dup = strdup(str);
	if (str_dup == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new->str = str_dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
