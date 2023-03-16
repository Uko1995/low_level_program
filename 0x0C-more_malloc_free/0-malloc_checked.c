#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: number of bytes
 *
 * Return: pointer to memory
 */

void *malloc_checked(unsigned int b)
{
	void *new;

	new = malloc(b);

	if (new == NULL)
		exit(98);

	return (new);

}
