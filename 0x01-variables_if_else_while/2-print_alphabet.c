#include <stdlib.h>
/**
 * main - Entry point
 * Description: 'Prints alpha in lower case'
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
