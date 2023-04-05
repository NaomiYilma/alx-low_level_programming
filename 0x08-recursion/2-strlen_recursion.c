#include "main.h"
/**
 * _strlen_recursion - the length of a string
 * @s: String
 *
 * Return: 0 for success
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return ((_strlen_recursion(s + 1)) + 1);
	}
	return (0);
}
