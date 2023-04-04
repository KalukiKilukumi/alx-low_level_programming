#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @src: memory source
 * @dest: memory destination
 * @n: number of bytes
 *
 * Return: copied memory with nbytes changes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (;j < n; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
