#include <stdio.h>
/**
 * main - printing of alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar (al);
	}
	putchar('\n');
	return (0);
}
