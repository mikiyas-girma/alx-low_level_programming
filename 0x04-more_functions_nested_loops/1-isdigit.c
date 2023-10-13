#include "main.h"
#include <ctype.h>
/**
 * _isdigit - checks whether is between 0 and 9
 * Return: 1 if true else 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
