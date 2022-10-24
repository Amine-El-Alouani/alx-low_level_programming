#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint - size_t func
 * @h: param
 * Return: val
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	
	for (i = 0; h->next != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
