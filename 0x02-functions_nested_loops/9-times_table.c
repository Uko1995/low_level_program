#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 12; i++)
	{
		int result;

		result = 9 * i;
		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		_putchar(result / 10 + '0');
		_putchar(result % 10 + '0');
		_putchar('\n');
	}
}
