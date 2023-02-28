#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string input
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int length, i;

	while (s[length] != '\0')
		length++;
	for (i = lenght - 1; i <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\0');
	return (0);
}
