#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: number times table (0 < n <= 15)
 * Return: no return
 */
void print_times_table(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	_putchar('\n');
}
