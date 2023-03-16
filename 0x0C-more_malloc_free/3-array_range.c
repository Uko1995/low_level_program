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
	unsigned int i;

	if (min > max)
		return (NULL);

	new = malloc(sizeof(int) * (max - min) + 1);
	if (new == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		new[i] = min + i;

	return (new);
}
