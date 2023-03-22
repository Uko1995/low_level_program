#include "3-calc.h"

/**
 * op_add - returns the sum of a and b
 * @a: integer argument
 * @b: integer argument
 *
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: integer argument
 * @b: integer argument
 *
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: integer argument
 * @b: integer argument
 *
 * Return: product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - calculates the result of the division of a and b
 * @a: integer argument
 * @b: integer argument
 *
 * Return: result of the division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of a and b
 * @a: integer argument
 * @b: integer argument
 *
 * Return: remainder of the division of a and b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
