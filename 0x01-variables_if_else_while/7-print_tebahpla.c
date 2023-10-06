#include <stdio.h>
/**
 * main - entry point to the program
 * prints the alphabet in lowercase, followed by a new line
 * Return: 0 finishes the program
 */

int main(void)
{
	int alphabets = 'z';

	while (alphabets >= 'a')
	{
		putchar(alphabets);
		alphabets--;
	}
	putchar('\n');
	return (0);
}
