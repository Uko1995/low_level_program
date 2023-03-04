#include "main.h"

/**
 * *_strcat - function that concatenates two stringsand adds a null character
 * @dest: input
 * @src: input
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
		dest++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		dest++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}
