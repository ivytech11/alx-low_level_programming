#include <stdio.h>
#include "holberton.h"

/**
 * main - Takes a date and prints the day of the year and the remaining days.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int month, day, year;

	if (argc != 4)
	{
		printf("Usage: %s month day year\n", argv[0]);
		return (1);
	}

	month = atoi(argv[1]);
	day = atoi(argv[2]);
	year = atoi(argv[3]);

	if (!is_valid_date(month, day, year))
	{
		printf("Invalid date: %s/%s/%s\n", argv[1], argv[2], argv[3]);
		return (1);
	}

	printf("Date: %02d/%02d/%04d\n", month, day, year);
	printf("Day of the year: %d\n", day_of_year(month, day, year));
	printf("Remaining days: %d\n", remaining_days(month, day, year));

	return (0);
}

