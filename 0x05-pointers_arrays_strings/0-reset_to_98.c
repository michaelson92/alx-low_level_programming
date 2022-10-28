#include "main.h"
/**
  * reset_to_98- takes a pointer to an int and update the value
  *@n: pointer with int type
  *Return: n
  */
void reset_to_98(int *n)
{
	int x = 98;

	*n = &x;

}

