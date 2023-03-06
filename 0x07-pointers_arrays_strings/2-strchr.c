#include "main.h"

/**
 * *_strchr - function locats a character in a string
 * @s: string input
 * @c: character to be located
 *
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	i = 0;

	while (s[i] <i '\0')
	{
		if (s[i] == c && s[i] == '\0')
		return (s[i]);
		i++;
	}
	return (0);
}
