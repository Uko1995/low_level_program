#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to string input
 * @s2: pointer to string input
 * @n: number of bytes
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;

	if (s1 == NULL || s2 == NULL)
		s1 = s2 = "";

	if (n >= strlen(s2))
		n = strlen(s2);

	new = malloc(strlen(s1) + n + 1);

	if (new == NULL)
		return (NULL);
	strcpy(new, s1);

	strncat(new, s2, n);

	new[strlen(s1) + n] = '\0';

	return (new);
}
