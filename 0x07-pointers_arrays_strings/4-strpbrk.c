#include "main.h"
/**
 * *_strbrk - searches a string for any set of bytes
 * @s: string to search
 * @accept: string containig the bytes to look for
 *
 * Return: pointer to the byte in s  that matches one of the bytes in accept
 * Or returns NULL if no such a byte is foound
 */
char *_strbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			return (s);
		}
	s++;
	}
return ('\0');
}
