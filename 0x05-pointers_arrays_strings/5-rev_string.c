#include "main.h"

/**
 * rev_string:- reverses a string
 * @s: pointer pointing to string
 * Return: 0
 */

void rev_string(char *s)
{
	int length = 0, rev = 0;
	char temp;

	while (s[rev++])
		length++;

	for (rev = length - 1; rev >= length / 2; rev--)
	{
		temp = s[rev];
		s[rev] = s[length - rev - 1];
		s[length - rev - 1] = temp;
	}
}

