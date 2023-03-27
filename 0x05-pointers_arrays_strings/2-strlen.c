#include "main.h"

/**
 * _strlen -function that checks length of a string
 * @s: string
 * Return: length of s
 */

int _strlen(char *s)
{
	int string_length = 0;

	while (s[string_length])
		string_length++;
	return (string_length);
}
