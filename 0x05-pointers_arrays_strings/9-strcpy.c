#include "main.h"

/**
 * _strcpy:- copies the string pointed to by @src
 * including the terminating nll byte (\0) to the buffer pointed to by @dest
 * @src: the pointer to string to be copied
 * @dest: pointer tobuffer to copy the string to(destination)
 *
 * Return: the copied string
 */

char *_strcpy(char *dest, const char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
