#include "main.h"
/**
 * swap_int - function that swaps th value of 2 integers
 * @a: memory location that swaps and stores value of b
 * @b: memory location that swaps and stores value of a
 * Return:0
 */

void swap_int (int *a, int *b)
{
	int change;

	change = *b;
	*b = *a;
	*a = change;
}
