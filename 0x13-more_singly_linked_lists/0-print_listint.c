#include "lists.h"

/**
 * print_listint - prints the elements of listint_t list
 * @h: pointer to linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	if  (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
