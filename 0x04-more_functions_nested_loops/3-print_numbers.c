#include "main.h"

/**
 * print_numbers - prints numbers 0 through 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int b;

	for (b = 48; b < 58; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
