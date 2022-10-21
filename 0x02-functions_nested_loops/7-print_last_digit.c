#include "main"
/**
  *print_last_digit - return the value of the last digit
  *@x: integer whose last value is returned
  *Return: 0
  */
int print_last_digit(int x)
{
	int dig = x % 10;

	if (dig < 0)

		dig *= -1;

	Putchar(dig + '0');

	return (0);
}

