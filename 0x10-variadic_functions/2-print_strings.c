#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings -  prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: numer of strings to be passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			s = "(nil)";

		printf("%s", s);

		if (i < (n - 1) && separator != 0)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
