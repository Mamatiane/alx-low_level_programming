#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Prints alpha in lower case'
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(i + 'a');
	}
	putchar('\n');
	return (0);
}
