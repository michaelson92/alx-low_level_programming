#include "main.h"
/**
 *_islower- searches for a lowecase character
 *@c: that is the character
*Return:1 for lowercase and 0 otherwise
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);


}
