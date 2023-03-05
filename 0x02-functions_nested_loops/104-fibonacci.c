#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int prev = 1, curr = 2, next;
	int i;

	printf("%lu, %lu, ", prev, curr);
	for (i = 3; i <= 98; i++)
	{
		next = prev + curr;
		printf("%lu", next);
		if (i < 98)
			printf(", ");
		prev = curr;
		curr = next;
	}
	printf("\n");
	return (0);
}
