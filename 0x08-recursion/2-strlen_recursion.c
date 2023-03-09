#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: pointer input
 *
 * Return: number of bytes
 */

int _strlen_recursion(char *s)
{
	unsigned int i, num;

	i = num = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s[i + 1]));
	}
}
