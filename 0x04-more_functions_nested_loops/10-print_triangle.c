#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= (size - 1); x++)
		{
			for (y = 0; y < (size - 1) - x; y++)
			{
				_putchar(' ');
			}
			for (z = 0; z <= x; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
