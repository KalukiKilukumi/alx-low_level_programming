#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints both lowercase and uppercase letters
 * Return: 0
 */
int main(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		putchar(lt);
	}
	for (lt = 'A'; lt <= 'Z'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
