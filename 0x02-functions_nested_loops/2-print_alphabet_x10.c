#include "main.h"
/**
  * print_alphabet_x10 - prints alphabets in lowercase 10x
  */
void print_alphabet_x10(void)
{
	char _tenx;

	char alph;

	for (_tenx = 0; _tenx <= 9; _tenx++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);

		_putchar('\n');
	}

}
