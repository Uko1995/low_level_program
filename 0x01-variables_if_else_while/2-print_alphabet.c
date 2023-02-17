#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: always 0
 */
int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case = 'z'; lower_case++)
		putchar("%c\n", lower_case);

	return (0);
}
