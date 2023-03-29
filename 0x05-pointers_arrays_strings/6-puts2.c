#include "main.h"

/**
 * puts2:- prints every other character of a string,
 * starting with the first character
 * @s: string arrays
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}

