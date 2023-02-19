#include <stdlib.h>
/**
 * main - prints alpha in lower case
 * Return: Alway 0
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
