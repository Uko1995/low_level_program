#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list
 * @h: pointer o list_t list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int num_elements = 0;

	while (h != NULL)
	{
		num_elements++;
		h = h->next;
	}
	return (num_elements);
}
