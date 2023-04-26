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
	int max_days = get_max_days(month);

	if ((year % 4 == 0 && year % 100 != 0) ||
	    (year % 400 == 0))
	{
		if (month >= 2 && day >= 60)
			day++;
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		if (day > max_days)
		{
			printf("Invalid date: %02d/%02d/%04d\n"
			       , month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day);
		}
	}
}
/**
* get_max_days - calculates the maximum days for each month
* @a: first argument
* Return: max days
*/
int get_max_days(int a)
{
	int max_days, odd_days, even_days;

	if (a > 2)
	{
		if (a % 2 == 0)
		{
			odd_days = (a / 2) * 31;
			even_days = (a / 2) * 30;
		}
		if (a % 2 != 0)
		{
			even_days = ((a - 1) / 2) * 30;
			odd_days = ((a - 1) / 2 + 1) * 31;
		}
		max_days = (odd_days + even_days) - 2;

	}
	if (a == 2)
	{
		max_days = 59;
	}
	if (a < 2)
	{
		max_days = 31;
	}

	return (max_days);
}
