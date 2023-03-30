#include "main.h"

/**
 * _strncat:- concatenates two strings
 * The _strncat function is similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 * @src: source string pointer
 * @dest: destination string pointer
 * @n: number of bytes to be used from src
 * Return: pointer to destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int length_of_string, a;
	/*a is a counter for n bytes of src to be concatenated*/
	/*length_of_string = length of destination string*/

	length_of_string = 0;
	while (dest[length_of_string] != '\0')
	{
		length_of_string++;
	}

	for (a = 0; a < n; && src[a] != '\0'; a++, length_of_string++)
	{
		dest[length_of_string] = src[a];
	}
	dest[length_of_string] = '\0';
	return (dest);
}
