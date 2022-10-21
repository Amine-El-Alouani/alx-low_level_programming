#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - struct func
 * @head: param
 * @str: param
 * Return: val
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	size_t i = 0;

	n_node = malloc(sizeof(list_t));
	if (n_node == NULL)
	{
		return (NULL);
	}

	n_node->str = strdup(str);

	while (str[i])
	{
		i++;
	}
	n_node->len = i;
	n_node->next = *head;
	*head = n_node;
	return (*head);
}
