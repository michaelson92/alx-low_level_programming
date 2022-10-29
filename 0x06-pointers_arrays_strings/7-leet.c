#include "main.h"
/**
* leet - encondes a string into 1337
* @x: input
*Return: x value
*/

char *leet(char *x)
{
	int i;
	int j;
	char s1[] = "aAeEo0tTlL";
	char s2[] = "4433007711";

	for (i = 0; x[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (x[i] == s1[j])
			{
				x[i] = s2[j];
			}
		}
	}
	return (x);
}

