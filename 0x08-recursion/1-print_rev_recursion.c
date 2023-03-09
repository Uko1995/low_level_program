#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer input
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	unsigned int n = 0;

	if (s[n] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(s[n]);
	}
}
