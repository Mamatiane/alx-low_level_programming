#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int c = 0;
	int digit = 0;
	unsigned int ni = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}
		while (s[c] >= 48 && s[c] <= 57)
		{
			digit = 1;
			ni = (ni * 10) + (s[c] - '0');
			c++;
		}
		if (digit == 1)
		{
			break;
		}
		c++;
	}
	ni *= sign
	return (ni);
}
