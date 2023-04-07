#include "main.h"
/**
 * _memcpy - copies n bytes frm mem area src to mem area dest
 * @dest: destination
 * @src: source
 * @n: size of bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n)
	{
		*dest++ = *src++;
		--n;
	}
	return (dest);
}
