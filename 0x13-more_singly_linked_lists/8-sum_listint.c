#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * sum_listint - int func
 * @head: param
 * Return: val or 0
 */

int sum_listint(listint_t *head)
{
	size_t sum = 0, i;

	if (head == NULL)
	{
		return (0);
	}
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
