#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always returns 0 for success
 */
void print_alphabet_x10(void)

{
	char ch;
	int i = 0;

	while (i <= '9')
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
