#include "main.h"

/**
  * get_bit - returns the value of a bit at a given index
  * @n: long integer
  * @index: index starting at 0
  *
  * Return: value of bit at index, -1 if failed
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}

