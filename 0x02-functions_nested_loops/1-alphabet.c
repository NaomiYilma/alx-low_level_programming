# include "main.h"
/**
 * print_alphabet - Entry Point
 *
 * Return: Always return 0 for sucess
 */
void print_alphabet(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
