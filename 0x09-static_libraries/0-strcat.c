#include "main.h"

/**
 * _strcat - concats two arrays
 *
 * @dest: destination of concat
 * @src: source array to concat
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while ((dest[i++] = src[j++]) != '\0')
		;
	dest[i] = '\0';

	return (dest);
}
