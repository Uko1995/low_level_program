#include "main.h"

/**
 * _isupper - checks if character is uppercase
 *@c: character to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char c;

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
