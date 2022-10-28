#include "main.h"
/**
  * swap_int-swaps the value of integers
  *@a: first int pointer
  *@b: second int pointer
  */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;

}
