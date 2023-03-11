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
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
