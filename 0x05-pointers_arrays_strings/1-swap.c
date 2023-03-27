#include "main.h"
/**
 * swap_int - function that swaps th value of 2 integers
 * @a: int
 * @b: int
 */

void swap_int (int *a, int *b)
{
	 int m;/* used as temporary storage*/

	 m = *a; /*a value is put into temporary storage*/
	 *a = *b; /* b value is put into temporary storage*/
	 *b = *m; /* a value in temporary storage is put into b and vice versa*/
}
