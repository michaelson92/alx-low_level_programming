#include <stdio.h>
/**
 * main -print alphabets in lowercase except q and e
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph != 'e' && alph != 'q')
		putchar (alph);
	}

	putchar ('\n');

	return (0);
}
