#include "main.h"
/**
 * reverse_array - reverses the content of an array of ints
 * @a: integer a
 * @n: integer n
 *
 * Return: reversed array of int
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
