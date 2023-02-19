#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand();
	int last_digit = n % 10;

	printf("Last digit of %d is ", n);

	if (last_digit > 5)
	{
		printf("%d is greater than 5\n", last_digit);
	}
	else if (last_digit == 0)
	{
		printf("0 and is 0\n");
	}
	else
	{
		printf("%d is %d and less than 6 and not 0\n", last_digit);
	}
	return (0);
}
