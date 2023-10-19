#include <string.h>
/**
 * *_strncat - concatenates n strings form src to dest
 * @dest: place where concatenated strings stored
 * @src: source strings to be concatenated to dest
 * @n: n numbers of char to be concatenated
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
