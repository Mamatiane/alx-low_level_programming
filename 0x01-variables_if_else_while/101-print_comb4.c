#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: 'prints all possible different combinations of three digits'
 * Return: Always 0
 */
int main(void)
{
	int d;
	int p;
	int k;

	for (d = 0; d < 10; d++)
	{
		for (p = d + 1; p < 10; p++)
		{
			for (k = p + 1; k < 10; k++)
			{
				if ((d * 100 + p * 10 + k) % 111 != 0)
				{
					putchar(d + '0');
					putchar(p + '0');
					putchar(k + '0');
					if (d < 7 || p < 8 || k < 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
