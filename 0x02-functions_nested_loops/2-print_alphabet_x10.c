#include "main.h"
/**
 * print_alphabet - prints alphabet 10 times
 *Return: void
 */

void print_alphabet(void)
{
	char ch;
	int i;

	i = 0;

	while (i <= 9)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
