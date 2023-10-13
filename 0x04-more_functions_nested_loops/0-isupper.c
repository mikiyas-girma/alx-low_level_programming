#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks a letter
 * @c: character
 * Return: 0 or 1 depending on the condition
 */
int _isupper(int c)
{
	char a = (char)c;
	if (isupper(a))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
