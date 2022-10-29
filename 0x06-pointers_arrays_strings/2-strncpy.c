#include "main.h"
/**
  *_strncpy-copies a string
  *@dest: destination
  *@src: source
  *@n: number of string
  *Return: dest
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
