#include "main.h"
/**
  *print_sign- prints the sign of a numer
  *Returnn:1 if n is greater than 0 and  0 if n is Zero
  */
int_print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');

		return (1);
	}

	else if (n == 0)
	{
		 _putchar('0');

		return (0);
	}
	else
	{
		 _putchar('-');

		return (-1);
	}


}
