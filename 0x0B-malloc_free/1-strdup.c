#include <stdlib.h>
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (src[l] != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

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

	d  = malloc(sizeof(str) * a);
	free(d);

	if (s == NULL)
		return (NULL);
	for (b = 0; b < a; b++)
		_strcpy(*d, *str);

	return (d);
}
