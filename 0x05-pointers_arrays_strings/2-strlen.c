#include "main.h"
/**
  * _strlen - measures length of string
  *@s:string to measure
  *Return: len
 */
int _strlen(char *s)
{
	char *s[];

	int len;


	while (*s != '\0')
	{
	len++;
	s++;
	}

	return (len);
}
