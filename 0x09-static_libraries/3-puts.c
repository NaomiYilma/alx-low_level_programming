#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string
 *
 * Return: A string
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
