#include "main.h"

/**
  *_isupper- checks uppercase character
  *@c: character to print
  *Return: 0 if c is uppercase, 0 otherwise
  */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
