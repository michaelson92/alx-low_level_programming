#include "main.h"
/**
 * print_alphabet - prints alphabets in lower case
 */
void print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		_putchar(alph);
	_putchar ('\n');
