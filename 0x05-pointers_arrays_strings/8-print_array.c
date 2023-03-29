#include "main.h"

/**
 * print_array:- prints a number of elements of an array
 * @a: the array
 * @n: number of elements to print
 */

void print_array(int *a, int n)
{
	int i;

	for (n--; n >= 0; n--; i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(",");
		}
	}

	printf("\n");
}
