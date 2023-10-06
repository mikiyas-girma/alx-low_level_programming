#include <stdio.h>
/**
 * main - entry point to the program
 * prints the alphabet in lowercase, followed by a new line
 * Retrun: 0 finishes the program
 */

int main(void)
{
		int alphabets = 'a';

		while (alphabets <= 'z')
		{
			putchar(alphabets);
			alphabets++;
											
		}
		putchar('\n');
		return (0);
}
