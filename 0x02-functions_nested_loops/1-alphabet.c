#include "main.h"
/**
 * main - entry point 
 * print_alphabet: prints alphabet in lowercase
 * Return: 0
 */
 
void print_alphabet(void);
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		-putchar(letter);
	_putchar('\n');
	return (0);
}


