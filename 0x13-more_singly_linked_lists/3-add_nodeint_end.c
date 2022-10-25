#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - struct func
 * @head: param
 * @n: param
 * Return: Val or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	size_t i;
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		temp = *head;
		for (i = 0; temp->next != NULL; i++)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
