#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/
void print_remaining_days(int month, int day, int year)
{
	int remaining_days = 0;
	
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				if (month > 2)
					remaining_days = 1;
			}
		}
		else
		{
			if (month > 2)
				remaining_days = 1;
		}
	}
	if (month < 1 || month > 12)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if (day < 1 || day > 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}
	if (month == 2)
	{
		if (remaining_days == 0 && day > 28)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
			return;
		}
		if (remaining_days == 1 && day > 29)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
			return;
		}
	}
	if (remaining_days == 1)
	{
		printf("Day of the year: %d\nRemaining days: %d\n", day + 31 + 29, 366 - day - 31 - 29);
	}
	else
	{
		printf("Day of the year: %d\nRemaining days: %d\n", day + (month - 1) * 31 - ((month - 1) / 8) * (month - 1) + remaining_days, 365 - day - (month - 1) * 31 + ((month - 1) / 8) * (month - 1) - remaining_days);
	}
}

