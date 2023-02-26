#include <stdlib.h>
#include <stdio.h>

/**
 * main - finds and prints the largest prime factor
 * of the number 612852475143
 * Return: Always 0
 */

int main(void)
{
	long int num = 612852475143;
	long int factor = 2;
	long int largest = 0;

	while (num != 1)
	{
		if (num % factor == 0)
		{
			num /= factor;
			if (factor > largest)
			{
				largest = factor;
			}
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largest);

	return 0;
}
