#include "main.h"
/**
 *_isalpha -checks for alphabets
 * @c: checks character
*Return:1 if charcter is letter, upper or lowercase, 0 otherwise
*/
int _isalpha(int c)

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

