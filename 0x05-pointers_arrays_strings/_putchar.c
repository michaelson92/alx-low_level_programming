#include <unistd.h>
#include "main.h"

/**
  * _putchar -writes the character c to standartd output
  * @c: prints character
  * Return: on success 1 else -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
