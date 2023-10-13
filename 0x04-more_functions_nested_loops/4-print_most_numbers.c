#include "main.h"
#include <stdlib.h>
/**
 * print_most_numbers - prints from 0 to 9 except from 2 and 4 using putchar
 * @num: variable for the numbers
 */
void print_most_numbers(void)
{
	int num = 48;

	while(num < 58)
	{
		if (num == 50 && num == 52)
		{
			continue;
		}
		else
		{
			putchar(num);
		}
		num++;
		putchar('\n');
	}
}
