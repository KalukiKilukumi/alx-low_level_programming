#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
