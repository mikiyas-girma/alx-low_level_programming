#include <stdio.h>
#include <stdlib.h>
/**
 * main - execution starts here
 * Return: 0 and ends the program
 * prints single digit numbers using only putchar
 */
int main(void)
{
	int i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
