#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: integer a
 * @b: integer b
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
