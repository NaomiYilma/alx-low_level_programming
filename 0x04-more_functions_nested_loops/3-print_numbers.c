#include "main.h"

/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: 0 for success
 */
void print_numbers(void)

{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
