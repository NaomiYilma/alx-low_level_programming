# include <stdio.h>
/**
 * main - prints hexadecimal numbers
 *
 * Return: Always returns 0
 */
int main(void)
{
	int i;
	int ch;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (ch = 97; ch <= 102; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
