#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * @argc: argument count
 * @argv: argumet vector
 *
 * Return: 0
 */

int main()
{
	printf("%s\n", __FILE__);
	return (0);
}
