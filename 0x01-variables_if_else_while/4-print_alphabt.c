#include <stdio.h>
/**
 * main - prints alphabet in lowercase 
 *
 * Return: Always return 0
 */
int main(void)
{
	char ch;

	for (((ch < 'e')||(ch > 'q')); ch++)
	{
		putchar(ch);
	}
	for (((ch > 'e')||(ch < 'q')); ch++)
	{
		putchar(ch);
	}
		putchar('\n');
	return (0);

