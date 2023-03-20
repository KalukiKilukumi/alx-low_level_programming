#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints lowercase letter except e and q
 * Return: 0
 */
int main(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		if (lt != 'e' && lt != 'q')
		{
			putchar(lt);
		}
		else
		{

		}
	}
	putchar('\n');
	return (0);
}
