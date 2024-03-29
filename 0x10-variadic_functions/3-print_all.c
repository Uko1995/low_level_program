#include  <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format:  list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	char *s;
	const char *p = format;

	va_start(ap, format);
	while (format == NULL)
	{
		printf("\n");
		return;
	}
	while (*p)
	{
		switch (*p)
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				s = va_arg(ap, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
		}
		p++;
		if (*p && (*p == 'i' || *p == 'c' || *p == 'f' || *p == 's'))
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
