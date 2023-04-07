#include "main.h"

/**
 * _memset - fills 1st n bytes of mem area pointed to by s with constant byte b
 * @s: points to the memory area
 * @b: constant byte
 * @n: unsigned int
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s++ = b;
	}
	return (s);
}
