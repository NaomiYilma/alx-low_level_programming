#include <stdio.h>
/**
 * main - Entry point 
 *
 * Return: Always returns 0 for success 
 */
void print_alphabet_x10(void);

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		putchar(i);
			for (j = 'a'; j <= 'z'; j++)
			{
				putchar(j);
			}
	}
	putchar('\n');
	return (0);
}
