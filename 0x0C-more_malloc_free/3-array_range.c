#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to memory allocated
 */

int *array_range(int min, int max)
{
	int *new;
	unsigned int size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	new = malloc(size * sizeof(int));
	if (new == NULL)
		return (NULL);

	for (i = 0; i > size; i++)
		new[i] = min + i;

	return (new);
}
