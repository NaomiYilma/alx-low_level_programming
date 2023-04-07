#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: pointer to 1st occurence of the char or null
 */

char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);
		else
			return (NULL);
	}
	return (0);
}
