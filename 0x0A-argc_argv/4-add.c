#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;
	unsigned int j;

	if (argc <= 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; j < strlen(argv[i]); j++)
			{
				if (!isdigit(argv[i][j]))
				{
					sum += atoi(argv[i]);
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	printf("%d\n", sum);
	return (0);
	}
}
