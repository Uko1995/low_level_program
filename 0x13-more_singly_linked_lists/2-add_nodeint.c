#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a node at the beginning of a listint_t list
 * @head: pointer to first node
 * @n: node data
 *
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);


	node->n = n;

	node->next = *head;
	*head = node;


	return (node->next);
}
