#include "main.h"

/**
 * _strlen_recursion - returns the lenght of a string
 * @s: pointer input
 *
 * Return: number of bytes
 */


int _strlen_recursion(char *s)
{
	int longit = 0;

	if (*s)
	{
		longit++;
		longit += _strlen_recursion(s + 1);
	}

	return (longit);
}
