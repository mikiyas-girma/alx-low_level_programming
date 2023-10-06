#include <stdio.h>
/**
 * main - compilation starts from here
 * prints lowercase letters followed by uppercase with new line at the end
 * Return: 0 and finishes the program
 */
int main(void)
{
	int lower = 'a';
	int upper = 'A';

	do {
		putchar(lower);
		lower++;
	} while (lower <=  'z');
	do {
		putchar(upper);
		upper++;
	} while (upper <= 'Z');
	putchar('\n');
	return (0);
}
