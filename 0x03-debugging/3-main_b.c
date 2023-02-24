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

int main(void)
{
	int month, day, year;

	printf("Enter date (MM/DD/YYYY): ");
	scanf("%d/%d/%d", &month, &day, &year);
	print_remaining_days(month, day, year);
	
	return (0);
}

