#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char b, a;

	for (a = 1; a < 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
