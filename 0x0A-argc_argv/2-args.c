#include <stdio.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int n = 0;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
