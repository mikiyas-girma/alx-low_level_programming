#include "main.h"
/**
 * main - entry point
 * Return: exit when finishes
 */
void print_alphabet(void)
{
	int lowers = 'a';

	while(lowers <= 'z')
	{
		_putchar(lowers);
		lowers++;
	}
	putchar('\n');
}
