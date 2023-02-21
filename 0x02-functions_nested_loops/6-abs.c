#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: integer whose absolute value is to be determined
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
		return (n * -1);
}
