#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - int func
 * @head: listint_t
 * Return: val or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *first_node;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	first_node = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = first_node;
	return (n);
}
