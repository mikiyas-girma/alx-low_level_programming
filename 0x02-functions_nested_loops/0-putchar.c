#include <stdio.h>
#include "main.h"
/**
 * main - entry point to the program
 * Return: 0 and finishes the program
 */
int main(void)
{
	char word[] = "_putchar\n";
	int char_counter = 0;

	while (char_counter < 9)
	{
		putchar(word[char_counter]);
		char_counter++;
	}
	putchar('\n');
	return (0);
}
