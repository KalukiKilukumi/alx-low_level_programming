#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b:desired value
 * @n: number of bytes to be charged
 *
 * Return: a changed array with new values for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int m = 0;

	for (;n > 0; m++)
	{
		s[m] = b;
		n--;
	}
	return (s);
}
