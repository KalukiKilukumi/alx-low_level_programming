#include "main.h"

/**
 * print_rev:- prints string in reverse
 * @s: string to print
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
