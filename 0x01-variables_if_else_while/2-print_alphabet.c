#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'using putchar'
 *
 * Return: 'Always return zero'
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 26; i++)
	{
		putchar(alphabet[i]);
	}
        return (0);
}
