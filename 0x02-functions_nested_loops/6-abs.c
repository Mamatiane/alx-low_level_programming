#include "main.h"
/**
 * _abs - Computes the absolute value.
 * of an integer.
 *
 * @c: input number as an integer.
 * Return: absolute value
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
