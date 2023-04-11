#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: long integer
  * @index: index starting from 0
  *
  * Return: 1, -1 if failed
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(long int) * 8)
		return (-1);

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
