#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_nodeint - struct func
 * @head: param
 * @n: param
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (!n_node)
	{
		return (NULL);
	}
	else
	{
		n_node->n = n;
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
}
