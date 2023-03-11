#include "main.h"

/**
 * *_memset - this function fills memory with a costant byte
 * @s: string input
 * @b: character to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
