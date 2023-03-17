# include <stdio.h>
/**
 * main - print lowercase in reverse
 *
 * Return: Always returns 0
 */
int main(void)
{
	int ch = 122;

	while (ch >= 97)
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
