#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	char e;

	for (e ='z'; e = 'a'; e--)
		putchar(e);
	putchar('\n');
	return (0);
}
