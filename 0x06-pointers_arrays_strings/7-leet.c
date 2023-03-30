#include <stdio.h>
#include "main.h"
/**
 * leet - encoding
 * @s: char
 *
 * Return: void
 */
char *leet(char *s)
{
	int i;
	int j;
	char s1[] = "aeotlAEOTL";
	char s2[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
	}
	return (s);
}

