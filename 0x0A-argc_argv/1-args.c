#include <stdio.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
