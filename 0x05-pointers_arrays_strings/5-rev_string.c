#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return - Always 0
 */
void rev_string(char *s)
{
	int length = 0;
	int middle = 0;
	char temp;

	while (s[middle++])
	{
		length++;
	}
	for (middle = length - 1; middle >= length / 2; middle--)
	{
		temp = s[middle];
		s[middle] = s[length - middle - 1];
		s[length - middle - 1] = temp;
	}
}
