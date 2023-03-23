#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times 
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= '9')
	for (i = '0'; i <= 14; i++)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
