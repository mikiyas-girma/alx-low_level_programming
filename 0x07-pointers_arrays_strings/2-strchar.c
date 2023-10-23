#include "main.h"
/**
 * *_strchar - locates a char first position
 * @s: string to be used
 * @c: character to be searched for
 * Return: a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchar(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
}
