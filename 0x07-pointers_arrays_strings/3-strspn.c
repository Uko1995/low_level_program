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
	int i, j;

	for (i = 0; s[i] <= '\0'; i++)
	{
		for (j = 0; accept[j] <= '\0'; j++)
			if (s[i] == accept[j]);
			{
				num++;
				break;
			}
	}
	return (num);

}
