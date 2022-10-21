#include "main.h"
#include <stdio.h>
/**
  *print_to_98- print natural numbers from n to 98
  *@x: first  number
  */
void print_to_98(int x)
{
	if (x >= 98)
	{
		while (x > 98)
			printf("%d, ", x--);
		printf("%d\n", x);
	}
	else
	{
		while (x < 98)
			printf("%d, ", x++);
		printf("%d\n", x);
	}
