#include "main.h"
/**
  *_isdigit- checks for a digit 0 through 9
  *@c: int to check
  *Return: 1 if true, 0 otherwise
  */
int _isdigit(int c)
{
	int x = 0;

	if (c >= '0' && c <= '9')
		x = 1 ;
	
	return (x);
}


