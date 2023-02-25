#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0 - 9
 * @c: integer
 * Return: The numbers 0 up to 9
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		_putchar(c + '0');
	}
	
	_putchar('\n');
}
