#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *buffer;

	buffer = malloc(size * sizeof(char));

	if (size == 0 || buffer == NULL)
	{
		return (NULL);
	}
	else
	{
		for (n = 0; n < size; n++)
		{
			buffer[n] = c;
		}
	return (buffer);
	}
	return (0);
}
