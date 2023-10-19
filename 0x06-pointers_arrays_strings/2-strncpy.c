#include "main.h"
/**
 * *_strncpy - copies a string
 * @dest: the destination value
 * @src: the source value
 * @n: the limit of chars to copied
 *
 * Return: the copied string or char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l;

	l = 0;
	while (l < n && src[j] != '\0')
	{
		dest[j] = src [j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
