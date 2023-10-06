#include <stdio.h>
/**
 * main - where execution starts
 * Return: 0 and closes the program
 * the program prints all hexadecimal characters with lowercase
 */
int main(void)
{
	int hex = 48;

	while (hex < 58)
	{
		putchar(hex);
		hex++;
	}
	hex = 97;

	while (hex <= 102)
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
