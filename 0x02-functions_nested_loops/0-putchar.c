#include <main.h>
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
		_putchar(word[char_counter]);
		char_counter++;
	}
	printf("_putchar\n");
	return (0);
}