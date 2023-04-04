#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of last digit
 */

int print_last_digit(int n)
{
	int c;

	if (n < 0)
	n = -n;

	c = n % 10;

	if (c < 0)
		c = -c;

	_putchar(c + '0');

	return (c);
}
