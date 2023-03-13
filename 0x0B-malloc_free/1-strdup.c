#include <stdlib.h>
#include "main.h"


/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: dtring input
 *
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	unsigned int a, b;
	char *d;

	if (str == NULL)
		return (NULL);

	d  = malloc(sizeof(char) * a);
	free(d);

	if (d == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		d[b] = str[b];

	return (d);
}
