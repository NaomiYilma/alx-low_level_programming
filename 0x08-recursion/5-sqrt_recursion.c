#include "main.h"
/**
 * _sqrt_recursion - the natural sqr root of a number
 * @n: given number
 *
 * Return: natural sqr root or -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n != 0)
	{
		return (n * _sqrt_recursion(n * 0.5));
	}
	else
	{
		return (0);
	}
}
