#include "main.h"

/**
 * _strncpy -function that copies a string
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: number of bytes to be used
 *
 * Return: pointer to destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int aray = 0, src_cnt = 0;

	while (src[aray++])
	{
		src_cnt++;
	}

	for (aray = 0; src[aray] && aray < n; aray++)
	{
		dest[aray] = src[aray];
	}
	for (aray = src_cnt; aray < n; aray++)
	{
		dest[aray] = '\0';
	}

	return (dest);
}
