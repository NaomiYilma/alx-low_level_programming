#include "main.h"
/**
 * string_toupper - lowercase letters to a string of uppercase
 * @ch: character
 * Return: ch
 */
char *string_toupper(char *ch)
{
	int i = 0;

	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - 32;
		i++;
	}
	return (ch);
}
