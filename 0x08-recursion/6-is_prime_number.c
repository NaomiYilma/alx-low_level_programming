#include "main.h"

/**
 * is_prime_number - checks if n is a prime number
 * @n: input integer
 *
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n > 2)
	{
		if (n / n != 1)
		{
			return (0);
		}
		else if (n / n == 1)
		{
			return (1);
		}
	}
	else
	{
		return (0);
	}
}
