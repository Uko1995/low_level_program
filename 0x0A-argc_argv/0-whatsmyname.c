#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program, followed by a new line
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
