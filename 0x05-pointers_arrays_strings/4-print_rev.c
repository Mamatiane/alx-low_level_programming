#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int ilong = 0;
	int x;

	while (*s != '\0')
	{
		ilong++;
		s++;
	}
	s--;
	for (x = ilong; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
