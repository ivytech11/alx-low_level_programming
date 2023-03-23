#include "main.h"


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int month, day, year;
    int remaining_days;

    month = 2;
    day = 29;
    year = 2000;

    printf("Date: %02d/%02d/%d\n", month, day, year);

    if (day > 31 || day < 1 || month > 12 || month < 1)
    {
        printf("Invalid date: %02d/%02d/%d\n", month, day, year);
        return (1);
    }

    remaining_days = convert_day(month, day);

    if (remaining_days != -1)
    {
        remaining_days += print_remaining_days(month, day, year);
        printf("Remaining days: %d\n", remaining_days);
        return (0);
    }
    else
    {
        printf("Invalid date: %02d/%02d/%d\n", month, day, year);
        return (1);
    }
}

/**
 * print_remaining_days - Determines the remaining days of the year
 * @month: Month in number format
 * @day: Day of the month
 * @year: Year
 *
 * Return: Remaining days in the year, or 0 if it fails
 */
int print_remaining_days(int month, int day, int year)
{
    int i;
    int remaining_days = 0;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (i = month; i <= 12; i++)
    {
        if (i == 2 && is_leap_year(year))
        {
            remaining_days += 29 - day;
        }
        else
        {
            remaining_days += days_in_month[i - 1] - day;
        }
        day = 0;
    }

    return (remaining_days);
}

/**
 * is_leap_year - Determines if a year is a leap year
 * @year: Year
 *
 * Return: 1 if year is a leap year, 0 otherwise
 */
int is_leap_year(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
