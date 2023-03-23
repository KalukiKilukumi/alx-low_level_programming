#include "main.h"
/**
 * print_alphabet_x10: entry point
 * Description: prints the alphabet in lowercase 10 times
 *Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
