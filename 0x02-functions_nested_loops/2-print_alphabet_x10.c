#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase, 10 times
 * followed by new line
 */
void print_alphabet(void);
{
	char letter;
	int i;
	
	i = 0;

	while (i < 10)
	{
		letter = 'a'
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
