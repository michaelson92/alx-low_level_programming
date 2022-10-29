#include "main.h"
#include <stdio.h>
/**
  * print_array- prints elements of array
  *@a: int type pointer
  *@n: int input
  */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n;  x++)
	{
		_printf("%d", a[x]);
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}

