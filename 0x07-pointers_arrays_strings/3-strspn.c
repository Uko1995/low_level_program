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
	unsigned int count = 0;
	int found = 1;

	while (*s != '\0' && found)
	{
		found = 0;
		for (int i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}
		s++;
	}
	return (count);
}

