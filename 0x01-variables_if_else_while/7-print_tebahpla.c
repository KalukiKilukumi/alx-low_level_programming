#include <stdio.h>
#include <unistd.h>
/**
 * main -entry point
 * Description: prints alphabet in reverse
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
