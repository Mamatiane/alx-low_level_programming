#include "main.h"
/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit;

	while (*s == ' ' || (*s >= '\t' && *s <= '\r'))
	{
		s++;
	}
	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		num = num * 10 + digit;
		s++;
	}
	return (sign * num);
}
