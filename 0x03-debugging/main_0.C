#include <stdio.h>

/**
 * print_remaining_days - Takes a date and determines the remaining days
 *                       in the year.
 * @month: Month in the date.
 * @day: Day of the month in the date.
 * @year: Year of the date.
 *
 * Return: Nothing.
 */
void print_remaining_days(int month, int day, int year)
{
	int i, leap;

	leap = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

	if (month > 12 || month < 1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (day > 31 || day < 1)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	for (i = 1; i < month; i++)
	{
		if (i == 2)
		{
			if (leap)
				day -= 29;
			else
				day -= 28;
		}
		else if ((i % 2 == 0 && i < 7) || (i % 2 == 1 && i >= 7))
			day -= 30;
		else
			day -= 31;
	}

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	printf("Day of the year: %d\n", day + ((leap && month > 2) ? 1 : 0));
	printf("Remaining days: %d\n", 365 + ((leap) ? 1 : 0) - (day + ((leap && month > 2) ? 1 : 0)));
}

