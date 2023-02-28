#include "main.h"

/**
 * puts2 - entry point
 * @str: input
 *
 * Return: string
 */

void puts2(char *str)
{
	int x, i;

	while (str[x] != '\0')
		x++;
	for (i = 0; i < x; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
