#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer input
 * @old_size: old memory size
 * @new_size: new memory size
 *
 * Return: poiter to new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		ptr = malloc(new_size);


	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	free(ptr);

	ptr = malloc(new_size);

	return (ptr);
}
