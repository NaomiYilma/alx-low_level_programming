#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: contents to be allocated
 * @s2: contents to be allocated
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int n = 0;
	char *s3;

	while (s1[i] != '\0')
	{
		s3[n] = s1[i];
		i++;
		n++;
	}
	while (s2[i] != '\0' && s3[i] != '\0')
	{
		s3[n] = s2[i];
		i++;
		n++;
	}
	return (NULL);
}
