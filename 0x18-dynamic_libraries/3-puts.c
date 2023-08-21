#include "main.h"

/**
 * _puts - function that prints a string, to stdout
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
