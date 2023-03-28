#include <stdio.h>
#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j += 2)
	{
		putchar(str[j]);
	}
	putchar('\n');
}
