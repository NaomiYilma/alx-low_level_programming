#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string in reverse
 * @s: string
 *
 * Return: a string in reverse
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	for (n -= 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
