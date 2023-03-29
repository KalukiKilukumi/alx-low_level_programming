#include "main.h"

/**
 * print_array:- prints a number of elements of an array
 * @a: the array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(",");
		}
	}

	printf("\n");
}
