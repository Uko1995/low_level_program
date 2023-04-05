#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: pointer to head node
 *
 * Return: sum of all data(n)
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node;
	int i;

	if (head == NULL)
		return (0);

	node = head;

	for (i = 0; node != NULL; i++)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
