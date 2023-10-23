#include "main.h"
/**
 * _memcpy - copies a specified bytes of char
 * @src: source content to be copied
 * @dest: destination where src content copied to
 * @n: the limit in bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;

	j = 0;
	while (n > 0)
	{
		dest[j] = src[j];
		j++;
		n--;
	}
	return (dest);
}
