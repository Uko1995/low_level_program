#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	result = atoi(argv[1] * argv[2]);

	if (argc == 3)
	{
		printf("%d\n", result);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
