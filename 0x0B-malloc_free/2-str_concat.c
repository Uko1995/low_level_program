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
	unsigned int i, j, k, l;
	char *new;

	i = j = 0;

	while (s1[i] == '\0')
		i++;
	while (s2[j] == '\0')
		j++;

	if (s1 == NULL && s2 == NULL)
		s1 = s2 = "";

	new = malloc(sizeof(char) * ((i + j) + 1));

	if (new == NULL)
		return (NULL);

	k = l = 0;

	while (k != '\0')
	{
		new[k] = s1[k];
		k++;
	}
	while (l != '\0')
	{
		new[k] = s2[l];
		k++;
		l++;
	}
	new[k] = '\0';
	return (new);
}
