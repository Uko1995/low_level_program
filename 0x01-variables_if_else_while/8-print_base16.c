#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0
 */

int main(void)
{
	int num;
	unsigned char la = '0';

	for (num = 0; num < 10; num++)
	{
		putchar(la);
		la++;
	}
	la = '1'
	for (num = 0; num < 6; num++)
	{
		putchar('0' + la);
		la++;
	}
	putchar('\n');
	return (0);
}
