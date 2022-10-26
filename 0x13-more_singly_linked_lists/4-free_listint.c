#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - void func
 * @head: param
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	size_t i;
	listint_t *temp;


	for (i = 0; head != NULL; i++)
	{
		temp = head;
		head = temp->next;
		free(temp);
	}
	free(head);
}
