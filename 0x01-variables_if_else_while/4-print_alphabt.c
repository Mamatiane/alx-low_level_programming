#include <stdio.h>
/**
 * main - Entry point
 * Discription: prints the alphabet in lowercase, followed by a new line
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
