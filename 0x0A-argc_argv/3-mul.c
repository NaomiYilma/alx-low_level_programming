#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: product
 */
int main(void)
{
	int n = 0;
	int m = 0;
	int product = (n * m);

	if (n != '\0' && m != '\0')
	{
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
