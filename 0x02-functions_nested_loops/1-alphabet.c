#include "main.h"
/**
 * main -entry point
 * print_alphabet -prints alphabet in lowecase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
