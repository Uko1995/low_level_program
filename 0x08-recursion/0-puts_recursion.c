#include "main.h"

/**
 * _puts_recursion - function prints a string followed by a new line
 * @s: pointer input
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}
}	
