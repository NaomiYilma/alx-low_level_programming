#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'using if'
 *
 * Return: 'is positive' if n>0, 'is zero' if n=0, 'is negative' is n<0
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
        if ((n % 10) > 5)
        {
                printf("Last digit of %d", "and is greater than 5\n");
        }
        else if ((n % 10) == 0)
        {
                printf("Last digit of %d", "and is 0\n");
        }
        else
        {
                printf("Last digit of %d", "and is less than 6 and not 0\n");
        }
        return (0);
}
