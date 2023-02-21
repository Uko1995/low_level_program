#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: checks the sign of a number
 *
 * Return: 1 if it is greater than zero, 0 if it is zero,
 * -1 if it is less than zero
 */

int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
