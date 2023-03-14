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

	while (s1[i] == NULL)
		i++;
	while (s2[j] == NULL)
		j++;

	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";

	new = malloc(sizeof(char) * (i + j + 1));

	if (new == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
	{
		new[k] = s1[k];
	}
	for (k = 0; k < j; k++)
	{
		new[k + i] = s2[k];
	}
	new[i + j] = '\0';
	return (new);
}
