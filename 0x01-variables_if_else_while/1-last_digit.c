#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Description: get the last digits of a number
 * Return: Always 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand();
	ld = n % 10;

	if (ld > 5)
	{
		printf("Last digit of 98 is 8 and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of 980 is 0 and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of -98 is -8 and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}

