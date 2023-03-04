#include "main.h"

/**
 * reverse_array - reverses the contents of an array
 * @a: input
 * @n: input
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i > n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
