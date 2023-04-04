#include "main.h"
/**
 * _strstr - locates a substring.
 * @haystack: string
 * @needle: substring
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *s = haystack;
		char *ss = needle;

		while (*s == *ss && *ss != '\0')
		{
			s++;
			ss++;
		}

		if (*ss == '\0')
			return (haystack);
	}

	return (0);
}

