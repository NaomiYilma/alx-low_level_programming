#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: unsigned int
 * @c: char
 *
 * Return: NULL if size = 0
 */
char *create_array(unsigned int size, __attribute__((unused)) char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	else if (size > 0)
	{
		malloc(size * sizeof(char));
	}
	return (0);
}
