#include "main.h"
/**
  *print_diagonal - draws a diagonal line
  *@n: number of diagonal backslash to be printed
  */
void print_diagonal(int n)
{
	int x;

	int y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}




}

