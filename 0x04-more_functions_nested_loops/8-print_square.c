#include "main.h"
/**
  *print_squre -prints a square
  *@size:size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		 _putchar('\n');
	}
	else
	{
		int i, j;

		 for (i = 0; i < size; i++)
		{
			for (j = 0; i < size; i++)
			{
				 _putchar('#');
			}
			_putchar('\n');
		 }
	 }
}