#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer to list_t list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int number_of_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (ni)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
