#include "main.h"
/**
 * print_triangle - printing triangles
 * @size: size of the triangle
 *
 * Return: 0 for success
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				putchar(' ');
			}
			for  (k = 0; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
