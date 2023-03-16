#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *new;

	if (nmemb == 0 || size == 0)
		return (NULL);

	new = malloc(nmemb * size);

	if (new == NULL)
		return (NULL);

	new = calloc(nmemb, size);

	return (new);
}
