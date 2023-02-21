#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase and end with a new line
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a = 'z'; a++)
		_putchar(a);

	_putchar('\n');
	return (0);
}
