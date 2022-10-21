#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - struct func
 * @head: param
 * @str: param
 * Return: val
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *ptr;
	size_t i = 0;

	ptr = *head;
	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->str = strdup(str);

	while (str[i])
	{
		i++;
	}
	temp->len = i;
	temp->next = NULL;

	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = temp;
	}
	return (*head);
}
