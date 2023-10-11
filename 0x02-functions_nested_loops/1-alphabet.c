#include "main.h"
/**
 * print_alphabet - displays lowercase letters
 * Return: exit when finishes
 */
void print_alphabet(void)
{
	int lowers = 'a';

	while (lowers <= 'z')
	{
		_putchar(lowers);
		lowers++;
	}
	_putchar('\n');
}
