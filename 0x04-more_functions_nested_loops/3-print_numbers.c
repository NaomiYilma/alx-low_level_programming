# include "main.h"
/**
 * print_numbers - prints numbers 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
}
