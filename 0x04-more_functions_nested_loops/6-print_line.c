#include "main.h"

/**
 * print_line - to print a line
 * @n: number of times for _
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	else
	{
		putchar('\n');
	}
	putchar('\n');
}
