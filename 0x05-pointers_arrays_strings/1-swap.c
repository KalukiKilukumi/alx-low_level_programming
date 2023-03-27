#include "main.h"
/**
 * swap_int - function that swaps th value of 2 integers
 * @a: int
 * @b: int
 */

void swap_int (int *a, int *b)
{
	 int m;

	 m = *a;
	 *a = *b;
	 *b = *m;
}
