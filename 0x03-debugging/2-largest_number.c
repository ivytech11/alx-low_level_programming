#include <stdio.h>

/**
 * largest_number - returns the largest of three numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}

	if (c > largest)
	{
		largest = c;
	}

	return largest;
}

/**
 * main - prints the largest of 3 integers
 *
 * Return: Always 0
 */
int main(void)
{
	int a, b, c;
	int largest;

	a = 0;
	b = -10;
	c = -5;

	largest = largest_number(a, b, c);

	printf("%d is the largest number\n", largest);

	return (0);
}

