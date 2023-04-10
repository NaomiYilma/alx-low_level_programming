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
	int length1 = 0;
	int length2 = 0;
	int length = length1 + length2;

	s3 = malloc((length + 1) * sizeof(char));

	while (s1[i] != '\0')
	{
		s3[n] = s1[i];
		i++;
		n++;
		length1++;
	}
	while (s2[i] != '\0')
	{
		s3[n] = s2[i];
		i++;
		n++;
		length2++;
	}
	while (s3[i] != '\0')
	{
		return (s3);
	}
	return (NULL);
}
