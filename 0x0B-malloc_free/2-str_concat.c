#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: pointer to string input
 * @s2: pointer to string input
 *
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k;
	char *new;

	i = j = 0;

	while (s1[i] = '\0')
		i++;
	while (s2[i] = '\0')
		i++;

	if (s1 == NULL && s2 == NULL)
		_putchar("");



	new = malloc(sizeof(char) * i + 1);

	if (new == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		new[j] = s1[i] + s2[i];
	}
	new[j] = '\0';
	return (new);
}
