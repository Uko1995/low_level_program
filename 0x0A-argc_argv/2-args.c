#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", arg[i]);
	}
	return (0);
}
