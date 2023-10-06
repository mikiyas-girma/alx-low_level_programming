#include <stdio.h>
/**
 * main - program execution starts from here
 * prints lowercase case letter except q and e followed by new line at the end
 * Return: 0 and ends the program
 */
int main(void)
{
	int alphabet = 'a';

	do {
		if (alphabet != 'e' && alphabet != 'q')
			putchar(alphabet);
			alphabet++;
	} while (alphabet <= 'z');
	putchar('\n');
	return (0);
}
