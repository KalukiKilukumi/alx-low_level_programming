#include "main.h"

/**
 * _puts:- function that prints a string to stdout
 * @str: pointer to string
 * Return: string and a new line
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
