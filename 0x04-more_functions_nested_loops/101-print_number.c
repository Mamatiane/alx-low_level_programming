#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 * Return: Always 0
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0')
}

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int n = 12345;

	print_number(n);
	putchar('\n');

	return (0);
}
