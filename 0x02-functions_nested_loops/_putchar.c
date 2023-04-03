#include "main.h"
#include <stdio.h>
/**
 * _putchar - write chatracter c to stdout
 * @c: character ro print
 *
 * Return: On success 1
 * On error, -1 is returned and error set appropriately
 */

int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
