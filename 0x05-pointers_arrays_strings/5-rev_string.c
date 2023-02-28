#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string input
 *
 * Return: string in reverse
 */

void rev_string(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	int i, char temp;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
