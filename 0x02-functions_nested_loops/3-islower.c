#include "main.h"
/**
 * _islower:identifies lowecase characters
 * @c: character to be checked
 * Return 1 if char is lowercase, otherwise 0
 */

int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
