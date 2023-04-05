#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to head node
 * @index: node index
 *
 * Return: NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;

	for (i = 0; node != NULL; i++)
	{
		if (i == index)
		{
			return (node);
		}

		node = node->next;
	}

	return (NULL);
}
