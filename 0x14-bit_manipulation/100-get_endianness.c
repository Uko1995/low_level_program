#include "main.h"

/**
  * get_endianness - chacks the endianness
  *
  * Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int b = 1;
	char *v;

	v = (char *) &b;
	return (*v == 1);
}
