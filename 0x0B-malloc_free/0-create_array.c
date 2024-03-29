#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars ans initializes
 * @size: size of the array
 * @c: specific char input
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size <= 0)
	{
		return (NULL);
	}
	ar = malloc(sizeof(c) * size);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
