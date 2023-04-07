#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: count
 * @argv: vector
 *
 * Return: Name of program
 */
int main(int argc, char *argv[])
{
	while (argc == 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
