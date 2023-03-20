#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints alphabet in lowercase followed by new line
 * Return: 0
 */
int main(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
