#include "main.h"

/**
  * flip_bits -returns the number of bits you would need to flip to get n to m
  * @n: integer
  * @m: integer
  * Return: integer
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned long int num = 0;

	while (XOR)
	{
		num += XOR & 1;
		XOR >>= 1;
	}
	return (num);
}
