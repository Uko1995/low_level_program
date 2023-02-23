#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Return: always 0
 */

void print_most_numbers(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		if (d != '2' && d != '4')
			_putchar(d);
	}
	_putchar('\n');
}
