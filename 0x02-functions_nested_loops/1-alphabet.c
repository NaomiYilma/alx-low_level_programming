# include "main.h"
/**
 * main - Entry Point
 *
 * Return: Always return 0 for sucess
 */
void print_alphabet(void);

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
	return (0);
}
