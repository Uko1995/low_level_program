#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string input
 * @accept: string input
 *
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0;
	int f = 0;
	unsigned int i;

	i = 0;

	while (s[i] <= '\0')
	{
		if (s[i] == accept[i])
		{
			f += 1;
			num += 1;
			break;
		i++;
	}
	return (num);
}
