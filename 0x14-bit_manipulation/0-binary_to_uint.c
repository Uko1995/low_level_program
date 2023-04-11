#include "main.h"

/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointer to a string of binary numbers
  *
  * Return: unsigned int number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned int i = 0;

	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		num = (num << 1) + (b[i] - '0');

		i++;
	}
	return (num);
}
