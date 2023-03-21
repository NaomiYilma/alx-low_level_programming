#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always returns 0 for success
 */
int main(void)
{
	char str1[] = "_";
	char str2[] = "putchar";

	{
		strcpy (str1, str2);
		putchar("strcpy (str1, str2): %s\n");
	}
		putchar('\n');
	return (0);
}
