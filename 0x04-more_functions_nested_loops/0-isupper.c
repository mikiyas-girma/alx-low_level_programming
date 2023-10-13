#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks a letter
 * @c: character
 * Return: 0 or 1 depending on the condition
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
