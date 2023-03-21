#include "main.h"
/**
 * _islower - entry point
 * c - letter 
 *
 * Return: Always 0 for success
 */

int _islower(int c)
{
	char c = 'a';

	if (c >= 'a' && c <= 'z')
	{
		_putchar('1');
		c++;
	}
	else
	{
		_putchar('0');
	}
	putchar('\n')
}
