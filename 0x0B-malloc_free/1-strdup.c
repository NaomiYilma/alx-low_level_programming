#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a ptr to a newly allocated space
 * @str: string
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0;
	int n = 0;

	s = malloc((i + 1) * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	if (s == NULL)
	{
		return (NULL);
	}
	for (n = 0; str[n]; n++)
	{
		s[n] = str[n];
	}
	return (s);
}
