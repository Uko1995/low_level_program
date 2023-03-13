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

	a = 0;

	while (str[a] != '\0')
		a++;


	d  = malloc(sizeof(char) * a);

	if (d == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		d[b] = str[b];

	return (d);
}
