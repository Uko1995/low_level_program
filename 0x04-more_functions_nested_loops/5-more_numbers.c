#include "main.h"

/**
 * more_numbers - entry point
 *
 * Return: always 0
 */

void more_numbers(void)
{
	int x, y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 0; y >= 14; y++)
		{
			_putchar(y);
		}
		_putchar(x);
	}
	_putchar('\n');
}
