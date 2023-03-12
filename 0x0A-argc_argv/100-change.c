#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * main - prints minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int twenty_fives, tens, fives, twos, ones;
	int cents = atoi(argv[1]);

	if (argc == 2)
	{
		if (cents > 0)
		{

			int twenty_fives = cents / 25;

			cents %= 25;
			int tens = cents / 10;

			cents %= 10;
			int fives = cents / 5;

			cents %= 5;
			int twos = cents / 2;

			cents %= 2;
			int ones = cents;

			printf("%d\n", twenty_fives + tens + fives + twos + ones);
			return (0);
		}
		else
		{
			printf("%d\n", 0);
			return (0);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
