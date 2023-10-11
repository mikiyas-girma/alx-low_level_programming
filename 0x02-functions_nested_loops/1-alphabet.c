#include <stdio.h>
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
		putchar(lowers);
		lowers++;
	}
	putchar('\n');
	return (0);
}
