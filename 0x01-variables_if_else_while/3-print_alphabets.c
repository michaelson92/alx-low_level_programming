#include <stdio.h>
/**
 * main - print alphabets in upper and lowercase
 * Return: Always 0
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar (alph);

	for (alph = 'A'; alph <= 'Z'; alph++)
		putchar (alph);

	putchar('\n');

	return (0);
}
