#include "main.h"

/**
 * puts2:- prints every other character of a string,
 * starting with the first character
 * @str: string arrays
 */

void puts2(char *str)
{
	int i = 0, length = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
